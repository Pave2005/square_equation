#ifndef SOLVER_SQUARE_TESTER
#define SOLVER_SQUARE_TESTER

/** @struct TestData - structure of coefficients and reference values.
*/
struct TestData
{
    Coeffs coeffs;
    Roots rootsR; // float   x1R; // float   x2R;
    int nRootsR;
};

// in, out ???

/** @fn TestSquareSolver (const TestData* Ref)
  * @brief This function compares the result of the SolveSquare () with the reference values. And print OK or ERROR...
  * @param Ref - pointer to the structure of reference values.
  * @param   i - number of test.
*/
void TestSquareSolver (const TestData* Ref, size_t i);


/** @fn RunTestSquareSolver ()
  * @brief This function runs the TestSquareSolver () at the taken values.
*/
void RunTestSquareSolver ();

#endif
