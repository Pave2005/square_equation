/** @fn OutPutRoots (nRoots, x1, x2)
  * @brief This function prints an answer.
  * @param [out] nRoots - number of roots.
  * @param [out] x1 - the first root of square equation.
  * @param [out] x2 - the second root of square equation.
*/
void OutPutRoots (int nRoots, float x1, float x2);
/** @fn ClearBuffer ()
  * @brief This function clears the input buffer.
*/
void ClearBuffer ();
/** @fn InPutCoeffs (a, b, c)
  * @brief This function transfers coefficients to the SolveSquare ().
  * @param [in] a - pointer to the first argument of square equation.
  * @param [in] b - pointer to the second argument of square equation.
  * @param [in] c - pointer to the third argument of square equation.
*/
void InPutCoeffs (float* a, float* b, float* c);
