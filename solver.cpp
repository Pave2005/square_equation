#include <stdio.h>
#include <math.h>
#include "solver.h"

int SolveSquare(float a, float b, float c, float* x1, float* x2)
{

    float disc = 0;

    if (isEqualZero(a))
    {
        return SolveLinear(b, c, x1);
    }

    disc = b * b - 4 * a * c;

    if (disc < 0)
    {
        *x1 = *x2 = NAN;
        return NO_ROOTS;
    }
    else if (isEqualZero(disc))
    {
        *x1 = *x2 = -b/(2*a);
        return ONE_ROOT;
    }

    *x1 = (-b + sqrt(disc)) / (2*a);
    *x2 = (-b - sqrt(disc)) / (2*a);

    return TWO_ROOTS;
}

int SolveLinear(float b, float c, float* x1)
{
    if (isEqualZero(b))
    {
        return (isEqualZero(c)) ? ANY_ROOTS : NO_ROOTS;
    }

    *x1 = -c / b;

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

void swap (float* x1, float* x2)
{
    float tmp;
    tmp = *x1;
    *x1 = *x2;
    *x2 = tmp;
}
