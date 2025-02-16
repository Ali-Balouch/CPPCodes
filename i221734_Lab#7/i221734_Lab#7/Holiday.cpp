/*
 * Holiday.cpp
 *
 *  Created on: Mar 8, 2023
 *      Author: muazam
 */

#include "Holiday.h"
#include<iostream>
using namespace std;

//Holiday :: Holiday(){
	//Default Constructor
//}
Holiday :: Holiday(string &n, int d, string &m):Name("Labor Day"), Day(1), Month("May"){
	Name = n;
	Day = d;
	Month =m;
}

Holiday :: Holiday(Holiday & d1){

	this->Name = d1.Name;
	this->Day = d1.Day;
	this->Month = d1.Month;
}

//----------------------------- Getter Settter --------------------------------

int Holiday::getDay() const {
	return Day;
}

void Holiday::setDay(int day) {
	while(day <0){
		cout<<"\n Enter Positive number in Date."<<endl;
		cin>>day;
	}
}

void Holiday::setMonth(const string &month) {
	int count =0;
	for(int i=0; i!='\0'; i++){
		count ++;
	}
	while (count >10){
		cout<<"\n Maximum input is 10. "<<endl;
		//cin>>month;

	}
	this->Month = month;
}
const string& Holiday::getMonth() const {
	return Month;
}

void Holiday::setName(const string &name) {
	int count =0;
		for(int i=0; i!='\0'; i++){
			count ++;
		}
		while (count >50){
			cout<<"\n Maximum input is 50. "<<endl;
			//cin>>name;
		}
		this->Name = name;
}

const string& Holiday::getName() const {
	return Name;
}

//---------------------------------------------------------------------

Holiday::~Holiday() {
	// TODO Auto-generated destructor stub
}

bool inSameMonth (Holiday &a, Holiday &b){

	if(a.getMonth() == b.getMonth())
			return true;
	else
		return false;
}

/*double avgDate(Holiday arr[], int size){
	double sum=0;
	for(int i=0; i<size; i++){
		sum+=arr[i];
	}
	return sum/size;
}
*/



int main(){

	Holiday d1;
	Holiday d2("Labor Day", 1, "May");
	d1.setName("Father Day");
	d1.setDay(5);
	d1.setMonth("May");
	cout<<"\n Is Same Month or not : "<<inSameMonth(d1, d2)<<endl;
//	cout<<"\n Averge Day : "<<avgDate()
	return 0;
}
