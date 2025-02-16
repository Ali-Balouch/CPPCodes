/*
 * Complex.h
 *
 *  Created on: Mar 8, 2023
 *      Author: muazam
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {

private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double r, double i);
	Complex(Complex & c1);
	// ------------ Getter settter -------------//
	double getImaginary() const;
	void setImaginary(double imaginary);
	double getReal() const;
	void setReal(double real);

	Complex addComplex( double r);
	Complex addComplex(Complex &c1);
	Complex subComplex(double r);
	Complex subComplex(Complex &c1);
	Complex mulComplex(double n);
	Complex mulComplex(Complex &c1);

	virtual ~Complex();

};

#endif /* COMPLEX_H_ */
