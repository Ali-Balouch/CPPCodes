/*
 * instructor.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#include "instructor.h"
#include<iostream>
#include<cstring>
using namespace std;

instructor::instructor(string name,string lastname,int office,string des) {
	// TODO Auto-generated constructor stub
	this->first_name=name;
	this->last_name=lastname;
	this->office_no=office;
	this->designation=des;

}
void instructor::print(){
	cout<<"Name : "<<first_name<<endl;
	cout<<"Last name : "<<last_name<<endl;
	cout<<"Office No : "<<office_no<<endl;
	cout<<"Designation : "<<designation<<endl;
}
void instructor::setname(string fname){
	this->first_name=fname;

}
void instructor::setlastname(string lname){
	this->last_name=lname;

}
void instructor::setdes(string des){
	this->designation=des;

}
void instructor::setoffice(int off){
	this->office_no=off;

}


instructor::~instructor() {
	// TODO Auto-generated destructor stub
}

int main(){



}


