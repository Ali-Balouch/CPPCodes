/*
 * point.h
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#ifndef POINT_H_
#define POINT_H_

class point {
private:
	int x;
	int y;
public:
	point(int=0,int=0);
	point(const point &);
	int getx();
	int gety();
	virtual ~point();

};

#endif /* POINT_H_ */
