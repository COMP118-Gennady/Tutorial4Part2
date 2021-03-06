/** \file     matrix.h
* \brief      Header file for a small matrix library
* \details	  Library with various matrix manipulation
* \author     Gennady Petrishchev
* \version    0.1
* \date       2021
* \copyright  GNU Public License.
*/
#ifndef MATRIX_H
#define MATRIX_H

//Global constants for this matrix library
const int MAX_COL = 5;
const double MIN_VALUE = 0.0;
const double MAX_VALUE = 5.0;
void fillWithRandom(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow);
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow);
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow);

#endif /* MATRIX_H */