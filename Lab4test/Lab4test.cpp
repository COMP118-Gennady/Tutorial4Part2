#include "pch.h"
#include "CppUnitTest.h"
#include "../Tutorial4Part2/matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab4test
{
	TEST_CLASS(Lab4test)
	{
	public:
		
		TEST_METHOD(TestsumOfRow)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 1, 2, 3, 4 };
			double result[3];

			//Act
			for(int i = 0; i < 3; i++)
				result[i] = sumOfRow(matrix, i, ROW);

			//Assert
			Assert::AreEqual(10.0, result[0]);
			Assert::AreEqual(0.0, result[1]);
			Assert::AreEqual(0.0, result[2]);
		}

		TEST_METHOD(TestsumOfCol)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 1, 2, 3, 4 };
			double result[4];

			//Act
			for (int i = 0; i < 4; i++)
				result[i] = sumOfCol(matrix, i, ROW);

			//Assert
			Assert::AreEqual(1.0, result[0]);
			Assert::AreEqual(2.0, result[1]);
			Assert::AreEqual(3.0, result[2]);
			Assert::AreEqual(4.0, result[3]);
		}

		TEST_METHOD(TestsumOfDiagonal)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { { 2, 1, 3}, { 3, 2, 1}, { 1, 3, 2 } };
			double result;

			//Act
			result = sumOfDiagonal(matrix, ROW);

			//Assert
			Assert::AreNotEqual(-1.0, result);
		}
	};
}
