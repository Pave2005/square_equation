#include <stdio.h>
#include "io.h"
#include "solver.h"

void OutPutRoots (int nRoots, float x1, float x2)
{

    switch (nRoots)
    {
        case ANY_ROOTS:
            printf("any solutions\n");
            break;
        case ONE_ROOT:
            printf("x = %f\n", x1);
            break;
        case TWO_ROOTS:
            printf("x1 = %f, x2 = %f\n", x1, x2);
            break;
        case NO_ROOTS:
            printf("no solutions\n");
            break;
    }
}

void ClearBuffer ()
{
    while ( getchar() != '\n')
        ;
}

void InPutCoeffs (float* a, float* b, float* c)
{
    while ( scanf("%f %f %f", a, b, c) != 3 )
    {
        printf("Incorect input!\n");
        ClearBuffer();
    }
}
