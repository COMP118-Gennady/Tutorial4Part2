/** \file     driver.cpp
* \brief      Small matrix manipulation program, part of Lab 4 part 2
* \details    
* \author     Gennady Petrishchev
* \version    0.1
* \date       2021
* \copyright  GNU Public License.
*/

#include "matrix.h"
#include <iostream>

using namespace std;

int menu();

const int MAX_ROW = 5;

/**
* The <code>main</code> function is the driver of the program
* @return code 0
*/
int main()
{
    int choice;
    int row, col;

    double matrix[][MAX_COL] = {0};

    do {
        choice = menu();

        switch (choice) {
        case 1: cout << "Enter the row number (R#) you want to sum: ";
            cin >> row;
            cout << sumOfRow(matrix, row, MAX_ROW) << endl;
            break;
        case 2: cout << "Enter the column number you want to sum: ";
            cin >> col;
            cout << sumOfCol(matrix, col, MAX_ROW) << endl;
            break;
        case 3: fillWithRandom(matrix, MAX_ROW);
            break;
        case 4: printMatrix(matrix, MAX_ROW);
            break;
        case 5:
            if (!makeIdentityMatrix(matrix, MAX_ROW))
                cerr << "\nNot a square matrix, cannot apply function";
            break;
        case 6:
            if (isIdentityMatrix(matrix, MAX_ROW))
                cout << "\nMatrix is an identity matrix";
            else
                cout << "\nMatrix is NOT an identity matrix";
            break;
        case 7:
            cout << "\nSum of diagonal is: " << sumOfDiagonal(matrix, MAX_ROW);
            break;
        case 8: //Exit
            break;
        default: cerr << "Invalid Choice \n";
            break;
        }

    } while (choice != 8);
    std::cout << "Goodbye!\n";
}

/**
* Function <code>menu</code>
* @return choice for the menu
*/
int menu()
{
    int choice;
    cout << "1) Sum of Row" << endl;
    cout << "2) Sum of Column" << endl;
    cout << "3) Fill Random" << endl;
    cout << "4) Print" << endl;
    cout << "5) Identity check" << endl;
    cout << "6) Make an identity" << endl;
    cout << "7) Diagonal sum" << endl;
    cout << "8) Exit" << endl;
    cout << "Enter your option: ";
    cin >> choice;

    return choice;
}


