#include <stdio.h>
#include <math.h>
#include "solver.h"
#include "solve_square_tester.h"

void TestSquareSolver (const TestData* Ref)
{
    float x1 = 0;
    float x2 = 0;

    int nRoots = SolveSquare(Ref -> a, Ref -> b, Ref -> c, &x1, &x2);

    if ( x1 > x2 )
    {
       swap (&x1, &x2);
    }

    if (( !isnan(x1) && !isEqual (x1, Ref -> x1R) ) ||
        ( !isnan(x2) && !isEqual (x2, Ref -> x2R) ) ||
          nRoots != Ref -> nRootsR)
    {
        printf("ERROR!!!: x1 = %f, x2 = %f, nRoots = %d.\n", x1, x2, nRoots);
        printf("RIGHT ROOTS: x1 = %f, x2 = %f, nRoots = %d.\n", Ref -> x1R, Ref -> x2R, Ref -> nRootsR);
    }
    else
    {
        printf("Code is OK\n");
    }

}

void RunTestSquareSolver ()
{
    TestData allData [] = {{.a = 1, .b = 2, .c = 1, .x1R = -1, .x2R = -1, ONE_ROOT},
                           {.a = 1, .b = 0, .c = -4, .x1R = -2, .x2R = 2, TWO_ROOTS},
                           {.a = 1, .b = 0, .c = -9, .x1R = -3, .x2R = 3, TWO_ROOTS}};

    //
    for ( size_t i = 0; i < sizeof(allData) / sizeof(TestData); i++ ) /// sifeof ??? sizeof(allData) / sizeof(allData[0])
    {
        TestSquareSolver ( &allData[i] );
    }
}
