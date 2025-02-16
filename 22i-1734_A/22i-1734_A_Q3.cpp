//============================================================================
// Name        : Q3.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

class FlightInfo{
	
	private:
		int FlightNumber;
		char* Destination;
		float Distance;
		float Fuel;
	public:
		FlightInfo(int = 02 ,char* = NULL,float = 200, float = 0.0);
		void feedInfo();
		void calFuel();
		void showInfo();
		float getFuel();
		~FlightInfo();
};	

	FlightInfo :: FlightInfo(int FN,char* arr,float dis, float fuel){
			cout<<"\n Constructor"<<endl;
			this->FlightNumber = FN;
			arr = new char[30];
			for(int i=0; i<30; i++)
				arr[i] = '\0';
			this->Destination = arr;
			this->Distance = dis;
			this->Fuel = fuel;
			
		}
	void FlightInfo :: feedInfo(){
			int fn =0; float distance=0.0;
			char* des;
			des = new char[15];
			for(int i=0; i<15; i++)
				des[i] ='\0';
			cout<<"\n Enter Fight Number : ";
			cin>>fn;
			while(fn<0){
			cout<<"\n Fight Number cannot be negative,please Re-enter: ";
			cin>>fn;
			}
			this->FlightNumber = fn;
			cout<<"\n Enter Destination : ";
			cin.ignore();
			cin.get(des,15);
			Destination = des;
			cout<<"\n Enter Distance : ";
			cin>>distance;
			while(distance<0){
			cout<<"\n Distance cannot be negative,please Re-enter: ";
			cin>>distance;
			}
			this->Distance = distance;
			calFuel(); 
			Fuel = getFuel();
		}
	void FlightInfo :: calFuel(){
			if(Distance<=1000)
				this->Fuel = 500;
			else if((Distance >=1000) && (Distance <=2000))
				this->Fuel = 1100;
			else
				this->Fuel = 2200;
		}
	void FlightInfo :: showInfo(){
			cout<<"\n FlightNumber = "<<FlightNumber<<endl;
			cout<<"\n Destination  = "<<Destination<<endl;
			cout<<"\n Distance     = "<<Distance<<endl;
			cout<<"\n Fuel         = "<<getFuel()<<endl;
		}
	float FlightInfo :: getFuel(){
			return Fuel;
		}

	FlightInfo :: ~FlightInfo(){
			cout<<"\n Destructor"<<endl;
			delete[] Destination;
		}
		

int main(){
	
	FlightInfo F1;
	F1.feedInfo();
	F1.showInfo();
	
	return 0;
}
