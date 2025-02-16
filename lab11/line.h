/*
 * line.h
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#ifndef LINE_H_
#define LINE_H_
#include"point.cpp"

class line {
private:
	point p1;
	point p2;

public:
	line(int=0,int=0,int=0,int=0);

	line(const point &,const point &);
	float slope();
	float length();
	point* midpoint();
	virtual ~line();
};

#endif /* LINE_H_ */
