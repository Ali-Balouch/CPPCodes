//============================================================================
// Name        : Q1.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;


class Employee{// Declearing Class of Employee
	
	private: // Private Data Member
		char* Name;
		double Salary;
	public: // Public Data Member 
		Employee(); // Constructor
		char* getName();
		double getSalary();
		
		~Employee(); //Destructor
	
};
// Defining Menmber Function

		Employee :: Employee(){
			
			char* name;
			double s=0;
			name = new char[30];
			for(int i=0; i<30; i++)
				name[i] = '\0';
			cout<<"\n Creating a new employee."<<endl;
			cout<<"\n Please type the name: ";
			
			cin.get(name,30);
			
			this->Name = name;
			cout<<"\n Please specify the salary: ";
			cin>>s;
			while(s<0){
			cout<<"\n Salary cannot be negative,please Re-enter: ";
			cin>>s;
			}
			this->Salary = s;
		}
		char* Employee:: getName(){
			return Name;
		}
		double Employee:: getSalary(){
			return Salary;
		}
		
		Employee:: ~Employee (){
			delete[] Name;
		}



int main(){

	Employee E1;
	cout<<"\n New employee has been created."<<endl;
	cout<<"\n Name of employee: "<<E1.getName()<<endl; 
	cout<<"\n Salary: "<<E1.getSalary()<<endl;
	cin.ignore();
	Employee E2;
	cout<<"\n New employee has been created."<<endl;
	cout<<"\n Name of employee: "<<E2.getName()<<endl; 
	cout<<"\n Salary: "<<E2.getSalary()<<endl;
	cin.ignore();


	cout<<"\n Thank you for testing Class Employee."<<endl;	
	return 0;
}
