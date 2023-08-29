#include <stdio.h>
#include <math.h>
#include <string.h>

#include "io.h"
#include "solver.h"
#include "solve_square_tester.h"
void CommandLine ();

int main(int argc, char *argv[]) // сжать в функцию
{
    CommandLine ();

    printf("введите через пробел аргументы квадратного уравнения\n");

    Coeffs coeffs = {};
    InPutCoeffs (&coeffs);

    Roots roots = {};
    int nRoots = SolveSquare (coeffs, &roots);

    OutPutRoots (nRoots, roots);
}
void CommandLine ()
{
if ( argc > 1 )
    {
        if ( strcmp ("--test", argv [1]) == 0 )
        {
            RunTestSquareSolver ();
            return 0;
        }
    }
}
