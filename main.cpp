#include <stdio.h>
#include <math.h>
#include <string.h>
#include "io.h"
#include "solver.h"
#include "solve_square_tester.h"

int main(int argc, char* argv[])
{
    if ( argc > 1 )
    {
        if ( strcmp ("--test", argv [1]) == 0 )
        {
            RunTestSquareSolver ();
        }
    }
    printf("введите через пробел аргументы квадратного уравнения\n");
    float a = 0;
    float b = 0;
    float c = 0;

    InPutCoeffs (&a, &b, &c);

    float x1 = 0;
    float x2 = 0;

    int nRoots = SolveSquare (a, b, c, &x1, &x2);

    OutPutRoots (nRoots, x1, x2);
}


