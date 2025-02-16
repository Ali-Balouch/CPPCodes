/*
 * Distance.h
 *
 *  Created on: Mar 22, 2023
 *      Author: muazam
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_
#include<iostream>
using namespace std;


class Distance {

private:
	int feet;
	int inches;
public:
	Distance(int=0, int =0);
	bool setFeet(int f);
	int getFeet()const;
	bool setInches(int i);
	int getInches()const;
	void print();
	//Operator Overloading
	Distance operator+(const Distance &obj);
	Distance operator-(const Distance &obj);
	const Distance operator=(const Distance &obj);

	virtual ~Distance();
};

#endif /* DISTANCE_H_ */
