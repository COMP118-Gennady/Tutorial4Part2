/** \file     matrix.cpp
* \brief      Implementation for a small matrix library
* \details	  Library with various matrix manipulation
* \author     Gennady Petrishchev
* \version    0.1
* \date       2021
* \copyright  GNU Public License.
*/

//User-defined libraries
#include "matrix.h"

//Language libraries
#include <iostream>
#include <cassert>

using namespace std;

/**
* The <code>fillWithRandom</code> function sets random values for all the elements
* of the matrix. In the range of MIN_VALUE -- MAX_VALUE.
* @param The matrix to fill in random values
* @param maxRow The number of rows that the matrix contains
*/
void fillWithRandom(double mat[][MAX_COL], const int maxRow)
{
	assert(maxRow > 0);

	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j] = rand() % (static_cast<int>(MAX_VALUE) - static_cast<int>(MIN_VALUE)) + static_cast<int>(MIN_VALUE);
		}
	}
}
/**
* The <code>printMatrix</code> function prints the content of the matrix
* @param The matrix to be printed
* @param maxRow The number of rows that the matrix contains
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow)
{
	assert(maxRow > 0);

	for (int i = 0; i < maxRow; i++) {
		cout << "\nR" << i << ": ";
		for (int j = 0; j < MAX_COL; j++) {
			cout << mat[i][j] << "\t"; //todo
		}
	}
}

/**
* The <code>sumOfRow</code> function computes the sum of a specific row
* @param The matrix to select row from
* @param row The number of the row within the matrix
* @param maxRow The number of rows that the matrix contains
* @return The sum of the values of the row
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)
{
	assert(maxRow > 0);

	double sum = 0;
	for (int i = 0; i < MAX_COL; i++) {
		sum += mat[row][i];
	}

	return sum;

}

/**
* The <code>sumOfCol</code> function computes the sum of a specific column
* @param The matrix to select column from
* @param column The number of the column within the matrix
* @param maxRow The number of rows that the matrix contains
* @return The sum of the values of the column
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow)
{
	assert(maxRow > 0);
	
	double sum = 0;
	for (int i = 0; i < maxRow; i++) {
		sum += mat[i][column];
	}

	return sum;
}
