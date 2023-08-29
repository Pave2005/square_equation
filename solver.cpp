#include <stdio.h>
#include <math.h>

#include "solver.h"

int SolveSquare( Coeffs coeffs, Roots *roots )
{
    if (isEqualZero(coeffs.a))
    {
        return SolveLinear(coeffs, roots);
    }

    float disc = 0;
    disc = coeffs.b * coeffs.b - 4 * coeffs.a * coeffs.c;

    if (disc < 0)
    {
        roots->x1 = roots->x2 = NAN;
        return NO_ROOTS;
    }
    else if (isEqualZero(disc))
    {
        roots->x1 = roots->x2 = - coeffs.b/(2*coeffs.a);
        return ONE_ROOT;
    }

    roots->x1 = (-coeffs.b + sqrt(disc)) / (2*coeffs.a);
    roots->x2 = (-coeffs.b - sqrt(disc)) / (2*coeffs.a);

    return TWO_ROOTS;
}

int SolveLinear(Coeffs coeffs, Roots *root)
{
    if (isEqualZero(coeffs.b))
    {
        return (isEqualZero(coeffs.c)) ? ANY_ROOTS : NO_ROOTS;
    }

    root->x1 = - coeffs.c / coeffs.b;

    return ONE_ROOT;
}

int isEqual (float x1, float x2)
{
    const double ACCUR = 1e-5;
    return fabs(x1 - x2) < ACCUR;
}

int isEqualZero(float a)
{
    return isEqual(a, 0);
}

void swap (float *x1, float *x2)
{
    float tmp = *x1;
    *x1 = *x2;
    *x2 = tmp;
}
