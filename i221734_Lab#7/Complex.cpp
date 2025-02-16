/*
 * Complex.cpp
 *
 *  Created on: Mar 8, 2023
 *      Author: muazam
 */

#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex() {
	// TODO Auto-generated constructor stub

}
Complex:: Complex(double r, double i):real(r), imaginary(i){
}

double Complex::getImaginary() const {
	return imaginary;
}

void Complex::setImaginary(double imaginary) {
	this->imaginary = imaginary;
}

double Complex::getReal() const {
	return real;
}

void Complex::setReal(double real) {
	this->real = real;
}

//---------------------------------------------------------

Complex :: Complex(Complex & c1){
	this->real = c1.real;
	this->imaginary = c1.imaginary;

}

Complex Complex ::  addComplex( double r){
		this->real += r;
		return *this;
	}
Complex Complex ::  addComplex(Complex &c1){
	this->real+=c1.real;
		this->imaginary += c1.imaginary;
		return *this;
}

Complex Complex ::  subComplex(double r){
	this-> real -= r;
	return *this;
	}
Complex Complex ::  subComplex(Complex &c1){
	this->real-=c1.real;
		this->imaginary -= c1.imaginary;
		return *this;
}

Complex Complex  :: mulComplex(double n){
	this->real *= n;
	return *this;
}
Complex Complex ::  mulComplex(Complex &c1){
	this->real= (real*c1.real) - (imaginary * c1.imaginary);
	this->imaginary =(real*c1.imaginary) + (c1.real*imaginary);
	return *this;
}


Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

int main(){

	Complex c1(2,3);
	Complex c2(3,4);
	c1.setReal(5);
	c1.setImaginary(4);
	cout<<c1.getReal();
	cout<<c1.getImaginary();



}
