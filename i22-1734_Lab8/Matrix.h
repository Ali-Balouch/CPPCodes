/*
 * Matrix.h
 *
 *  Created on: Mar 22, 2023
 *      Author: muazam
 */

#ifndef MATRIX_H_
#define MATRIX_H_
#include<iostream>
using namespace std;

class Matrix {

private:
	int row;
	int columns;
	int **matrix;
public:
	Matrix();
	Matrix(int r, int c);
	int getColumns() const;
	void setColumns(int columns);
	int** getMatrix() const;
	void setMatrix();
	int getRow() const;
	void setRow(int row);
	Matrix operator=(const Matrix &obj);
	bool operator==(Matrix &obj);
	Matrix operator+(int i);
	Matrix operator-(int j);
	Matrix operator+(Matrix &obj);
	void print();
	virtual ~Matrix();
};

#endif /* MATRIX_H_ */
