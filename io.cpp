#include <stdio.h>

#include "io.h"
#include "solver.h"

void OutPutRoots (int nRoots, Roots roots)
{
    switch (nRoots)
    {
        case ANY_ROOTS:
            printf("any solutions\n");
            break;
        case ONE_ROOT:
            printf("x = %f\n", roots.x1);
            break;
        case TWO_ROOTS:
            printf("x1 = %f, x2 = %f\n", roots.x1, roots.x2);
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

void InPutCoeffs (Coeffs *coeffs)
{
    while ( scanf("%f %f %f", &coeffs->a, &coeffs->b, &coeffs->c) != 3 )
    {
        printf("Incorect input!\n");
        ClearBuffer();
    }
}
