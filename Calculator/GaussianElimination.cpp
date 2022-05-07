#include "Gaussian.h"
#include <cmath>
#include <iostream>
#include <fstream>

using namespace gaussian;
using namespace std;

void elimination::elim() {
	double rows;
	int columns;
	double pivot;
	ofstream File("GaussianElimination.txt");
	//cout << "How many rows is there going to be?";
	//cin >> rows;

	//cout << "How many columns are in the matrix?";
	//cin >> columns;
	// Creates the matrix from the user
	cout << "This is a solve about a 2 by 2 matrix\n";
	double matrix[2][2];
	for (int r = 0; r < 2; r++) {
		for (int c = 0; c < 2; c++) {
			cout << "Please enter the number for [" << r + 1 << "," << c + 1 << "]: ";
			cin >> matrix[r][c];
		}
	}

	// Display your final matrix
	cout << "Here is your matrix\n";
	for (int r = 0; r < 2; r++) {
		for (int c = 0; c < 2; c++) {
			cout << matrix[r][c] << ",";
			File << matrix[r][c] << ",";
		}
		cout << endl;
		File << endl;
	}
	// Gaussian Elimination
	for (int m = 0; m < 2; m++) {
		// Divide the matrix by the diagonal element
		for (int c = 0; c < 2; c++) {
			matrix[m][c] = matrix[m][c] / matrix[m][m];
		}
		// This is the part that substract from the lower rows
		for (int i = m + 1; i < 2; i++) {
			for (int c = 0; c < 2; c++) {
				matrix[i][c] = matrix[i][c] - (matrix[i][m] * matrix[m][c]);
			}
		}
	}
	// Display Solved matrix
	cout << "Here is your solved matrix\n";
	for (int r = 0; r < 2; r++) {
		for (int c = 0; c < 2; c++) {
			cout << matrix[r][c] << ",";
			File << matrix[r][c] << ",";
		}
		cout << endl;
		File << endl;
	}

	File.close();
}