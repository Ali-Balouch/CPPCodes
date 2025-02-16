/*
 * Matrix.cpp
 *
 *  Created on: Mar 22, 2023
 *      Author: muazam
 */

#include "Matrix.h"
#include<iostream>
using namespace std;

Matrix :: Matrix(int r, int c){
	if(r >=1 && c >=2){
		this->row = r;
		this->columns = c;
	}
	matrix = new int*[row];
	for(int i=0; i<columns; i++){
		matrix[i] = new int[columns];
	}
	for(int i=0; i<row; i++){
			for(int j=0;j<columns; j++){
				matrix[i][j] = i+1;
			}
		}
}

int Matrix::getColumns() const {
	return columns;
}

void Matrix::setColumns(int columns) {
	if(columns >= 2)
	this->columns = columns;
}

int** Matrix::getMatrix() const {
	return matrix;
}

int Matrix::getRow() const {
	return row;
}

void Matrix::setRow(int row) {
	if(row >=1)
	this->row = row;
}

Matrix Matrix::operator=(const Matrix &obj){
	if((this->row == obj.row)  && (this->columns == obj.columns))
		for(int i=0; i<row; i++){
			for(int j=0;j<columns; j++){
				this->matrix[i][j] = obj.matrix[i][j];
			}
		}
	return *this;
}
bool Matrix :: operator==(Matrix &obj){
	int count =0;
	int element = row * columns;
	if((this->row == obj.row)  && (this->columns == obj.columns)){
			for(int i=0; i<row; i++){
				for(int j=0;j<columns; j++){
					if(this->matrix[i][j] == obj.matrix[i][j])
					count++;
				}
			}
			if(count == element)
				return 1;
			else
				return 0;
		}
	cout<<"\n Matrix Size Is Different"<<endl;
	return 0;

}
Matrix Matrix :: operator + (int add){
			for(int i=0; i<row; i++){
				for(int j=0;j<columns; j++){
					this->matrix[i][j] += add;
				}
			}
		return *this;
}
Matrix Matrix :: operator - (int sub){
	for(int i=0; i<row; i++){
		for(int j=0;j<columns; j++){
			this->matrix[i][j] -= sub;
					}
				}
			return *this;

}
Matrix Matrix :: operator+(Matrix &obj){
	for(int i=0; i<row; i++){
			for(int j=0;j<columns; j++){
				this->matrix[i][j] = matrix[i][j] + obj.matrix[i][j];
						}
					}
				return *this;

}
void Matrix :: print(){
		cout<<" Rows = "<<row<<endl;
		cout<<" Columns = "<<columns<<endl;

			for(int i=0; i<row; i++){
				for(int j=0;j<columns; j++){
					cout<<matrix[i][j]<<" ";
				}
				cout<<endl;
			}
}

Matrix::~Matrix() {
	// TODO Auto-generated destructor stub
	for(int i=0; i<columns; i++)
		delete matrix[i];

	delete[] matrix;
}


int main(){

	Matrix M1(3, 3);
	Matrix M2(3, 3);
	M1.print();
	if(M1 == M2)
		cout<<"M1 & M2 are equals."<<endl;
	else
		cout<<"\n M1 & M2 are not equal."<<endl;
	M1 + 2;
	M1.print();
	M1 = M2;
	M2.print();
	M1 = M1 -1;
	M1.print();
}
