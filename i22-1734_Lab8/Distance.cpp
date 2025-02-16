/*
 * Distance.cpp
 *
 *  Created on: Mar 22, 2023
 *      Author: muazam
 */

#include "Distance.h"
#include<iostream>
using namespace std;

	Distance ::	Distance(int f, int inch){
		if(f >= 0)
			this->feet = f;
		if(inch >= 0){
			while(inch >= 12){
				inch -= 12;
				f++;
			}
			this->feet = f;
			this->inches = inch;
		}

	}
	bool Distance :: setFeet(int f){
		if(f >= 0){
			this->feet = f;
			return 1;
		}
		else{
			cout<<"\n Values must be Greater than 0.";
			return 0;
		}

	}
	int Distance :: getFeet()const{
		return feet;
	}
	bool Distance :: setInches(int inch){
		if(inch >= 0){
			int f=0;
					while(inch >= 12){
						inch -= 12;
						f++;
					}
					this->feet = f;
					this->inches = inch;
					return 1;
			}
		return 0;
		}
	int Distance :: getInches()const{
		return inches;
	}
	//Operator Overloading
	Distance Distance ::operator + (const Distance &obj){
			this->feet += obj.feet;
			this->inches+= obj.inches;

		return *this;
	}
	Distance Distance ::operator-(const Distance &obj){
				this->feet -= obj.feet;
				this->inches-= obj.inches;

				return *this;
	}
	const Distance Distance :: operator=(const Distance &obj){
		this->feet = obj.feet;
		this->inches = obj.inches;
		return *this;
	}
	void Distance :: print(){
		cout<<"\n Feet = "<<feet<<endl;
		cout<<"\n Inches = "<<inches<<endl;
	}

	Distance ::	~Distance(){
		// cout<<"\n Destructor"<<endl;
	}


int main(){

	Distance D1(5,24);
	Distance D2(5,30);
	Distance result;
	result = D1 + D2;
	result.print();
}


