#ifndef IO
#define IO

#include "solver.h"

/** @fn OutPutRoots (nRoots, x1, x2)
  * @brief This function prints an answer.
  * @param [out] nRoots - number of roots.
  * @param [out]  roots - structurure of the first root of square equation.
*/
void OutPutRoots (int nRoots, Roots roots);


/** @fn ClearBuffer ()
  * @brief This function clears the input buffer.
*/
void ClearBuffer ();


/** @fn InPutCoeffs (a, b, c)
  * @brief This function transfers coefficients to the SolveSquare ().
  * @param [in] coeffs - structure of pointers to the first, the second and the third argument of square equation.
*/
void InPutCoeffs (Coeffs *coeffs);

#endif
