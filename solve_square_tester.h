/** @struct TestData - structure of coefficients and reference values.
*/
struct TestData
{
    float a;
    float b;
    float c;
    float x1R;
    float x2R;
    int nRootsR;
};
/** @fn TestSquareSolver (const TestData* Ref)
  * @brief This function compares the result of the SolveSquare () with the reference values. And print OK or ERROR...
  * @param Ref - pointer to the structure of reference values.
*/
void TestSquareSolver (const TestData* Ref);
/** @fn RunTestSquareSolver ()
  * @brief This function runs the TestSquareSolver () at the taken values.
*/
void RunTestSquareSolver ();

