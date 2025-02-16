/*
 * instructor.h
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#ifndef INSTRUCTOR_H_
#define INSTRUCTOR_H_
#include<iostream>
using namespace std;
#include <cstring>

class instructor {
private:
	string first_name;
	string last_name;
	int   office_no;
	string designation;




public:
	instructor(string="",string="",int=0,string="");
	void print();
	void setname(string);
	void setlastname(string);
	void setoffice(int);
	void setdes(string);
	virtual ~instructor();
};

#endif /* INSTRUCTOR_H_ */
