#include <stdio.h>
#include <math.h>

#include "solver.h"
#include "solve_square_tester.h"

void TestSquareSolver (const TestData *Ref, size_t i)
{
    Roots roots = {};

    int nRoots = SolveSquare(Ref->coeffs, &roots);

    if ( roots.x1 > roots.x2 )
    {
       swap (&roots.x1, &roots.x2);
    }

    if (( !isnan(roots.x1) && !isEqual (roots.x1, Ref->rootsR.x1 ) ) ||
        ( !isnan(roots.x2) && !isEqual (roots.x2, Ref->rootsR.x2) )  ||
          nRoots != Ref->nRootsR)
    {
        printf("ERROR!!!: x1 = %f, x2 = %f, nRoots = %d.\n", roots.x1, roots.x2, nRoots);
        printf("RIGHT ROOTS: x1 = %f, x2 = %f, nRoots = %d.\n", Ref->rootsR.x1, Ref->rootsR.x2, Ref->nRootsR);
    }
    else
    {
        printf("Test %d is OK\n", i + 1);
    }

}

void RunTestSquareSolver ()
{
    int n = 0;
    TestData *allData = NULL;

    FILE *file = fopen ("test.txt", "r");
    fscanf (file, "%d", &n)
    allData = (TestData *) calloc(n, sizeof(TestData));

    if ((file = fopen ("test.txt", "r")) == NULL)
    {
        printf ("File doesn't onep");
        return 0;
    }

    while (fscanf (file,
                   "%f %f %f %f %f %d",
                   &allData[i].coeffs.a), &(allData[i].coeffs.b), &(allData[i].coeffs.c),
                   &(allData[i].roots.x1), &allData[i].roots.x2, &allData[i].nRootsR) != EOF)
    {
        i++;
    }
    fclose (file);
    for ( size_t i = 0; i < sizeof(allData) / sizeof(TestData); i++ )
    {
        TestSquareSolver ( &allData[i], i );
    }
    free (allData);
}

//void RunTestSquareSolver ()
//{
//    TestData allData [] = {{.coeffs.a = 1, .coeffs.b = 2, .coeffs.c = 1, .rootsR.x1 = -1, .rootsR.x2 = -1, ONE_ROOT},
//                           {.coeffs.a = 1, .coeffs.b = 0, .coeffs.c = -4, .rootsR.x1 = -2, .rootsR.x2 = 2, TWO_ROOTS},
//                           {.coeffs.a = 1, .coeffs.b = 0, .coeffs.c = -9, .rootsR.x1 = -3, .rootsR.x2 = 3, TWO_ROOTS}};

//    for ( size_t i = 0; i < sizeof(allData) / sizeof(TestData); i++ )
//    {
//        TestSquareSolver ( &allData[i], i );
//    }
//}
