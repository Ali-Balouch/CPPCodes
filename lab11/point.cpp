/*
 * point.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#include "point.h"
#include<iostream>
using namespace std;

point::point(int x,int y) {
	// TODO Auto-generated constructor stub
	this->x=x;
	this->y=y;

}



point::point(const point &obj) {
	// TODO Auto-generated constructor stub
	cout<<"copy constructor iside point "<<endl;
	this->x=obj.x;
	this->y=obj.y;

}
int point::getx(){
	return x;
}
int point::gety(){
	return y;
}

point::~point() {
	// TODO Auto-generated destructor stub
}




