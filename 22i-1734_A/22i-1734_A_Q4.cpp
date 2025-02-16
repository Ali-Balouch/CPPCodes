//============================================================================
// Name        : Q4.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<iostream>
using namespace std;

class Employee2{
	
	private:
		char* Name;
		float HourlyWage;
		float WorkedHours;
		float ExtraHours;
	public:
		Employee2();
		float wageCalculator();
		~Employee2();
};

		Employee2 :: Employee2(){
				char* nam;
				float HW=0.0, WH = 0.0, EH = 0.0, OverT=0.0, OverHW = 0.0,total=0.0;
				nam = new char[30];
				for(int i=0; i<30; i++)
					nam[i] ='\0';
				cout<<"\n Please enter employee's name then press Enter : ";
				cin.get(nam, 30);
				this->Name = nam;
				cin.ignore();
				cout<<"\n Please enter hourly wage then press Enter : ";
				cin>>HW;
			while(HW<0){
				cout<<"\n Hourly Wages cannot be negative,please Re-enter: ";
				cin>>HW;
				}
				this->HourlyWage = HW;
				cout<<"\n Please enter hours worked then press Enter: ";
				cin>>WH;
			while(WH<0){
				cout<<"\n Worked Hourse cannot be negative,please Re-enter: ";
				cin>>WH;
				}
				this-> WorkedHours = WH;
			if(WH>40){
					
					OverT = WH - 40;
					OverHW = HW + 5.0;
					total = wageCalculator() + (OverT * OverHW);
				cout<<"\n Paycheck for employee "<<Name<<endl;
				cout<<"\n Hourly Worked : "<<WorkedHours<<endl;
				cout<<"\n Hourly wage: "<<HourlyWage<<endl;
				cout<<"\n Overtime hours: "<<OverT<<endl;
				cout<<"\n Overtime hourly wage: "<<OverHW<<endl;
				cout<<"\n\n Total payment: "<<total<<endl;
				}
			else{
				cout<<"\n Paycheck for employee "<<Name<<endl;
				cout<<"\n Hourly Worked : "<<WorkedHours<<endl;
				cout<<"\n Hourly wage: "<<HourlyWage<<endl;
				cout<<"\n Total payment: "<<wageCalculator()<<endl;
			}
		}
		float Employee2 :: wageCalculator(){
			if(WorkedHours>40){
				return 40*HourlyWage;
			}
			else
				return WorkedHours*HourlyWage;
		}
		Employee2 :: ~Employee2(){
			delete[] Name;
			cout<<"\n Constructor"<<endl;
		}

int main(){
	
	Employee2 E1;
	
	return 0;
}
