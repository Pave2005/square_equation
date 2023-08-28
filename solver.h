/** @enum NUMBER_OF_SOLUTIONS - constants for the number of roots.
*/
enum NUMBER_OF_SOLUTIONS
{
    ANY_ROOTS = 0, /**< infinite number of roots */
    ONE_ROOT = 1, /**< one root */
    TWO_ROOTS = 2, /**< two roots */
    NO_ROOTS = -1 /**< no roots */
};

/** @file solver.cpp
  * @fn SolveSquare(float a, float b, float c, float* x1, float* x2)
  * @brief This function finds the roots of the square equation and returns them to the main function.
  * @param [in] a - the first argument of square equation.
  * @param [in] b - the second argument of square equation.
  * @param [in] c - the third argument of square equation.
  * @param [out] x1 - pointer to the first root of square equation.
  * @param [out] x2 - pointer to the second root of square equation.
  * @return return number of roots.
*/
int SolveSquare(float a, float b, float c, float* x1, float* x2);
/** @fn SolveLinear(float b, float c, float* x1)
  * @brief This function finds the roots of the square equation and returns the value to the other functions.
  * @param [in] a - the first argument of square equation.
  * @param [in] b - the second argument of square equation.
  * @param [in] c - the third argument of square equation.
  * @return return number of roots.
*/
int SolveLinear(float b, float c, float* x1);
/** @fn isEqualZero(float a)
  * @brief This function determines whether a number is zero or not.
  * @param [in] a - comparable number.
  * @return return True / False.
*/
int isEqualZero(float a);
/** @fn isEqual (float x1, float x2)
  * @brief This function recognises whether two numbers are equal or not by current precision ( 1e-5 ).
  * @param [in] x1 - the first number.
  * @param [in] x2 - the second number.
  * @return return True / False.
*/
int isEqual(float x1, float x2);
/** @fn swap (float* x1, float* x2)
  * @brief This function changes the value of two numbers between each other.
  * @param [in] x1 - pointer to the first number.
  * @param [in] x2 - pointer to the second number.
*/
void swap (float* x1, float* x2);
