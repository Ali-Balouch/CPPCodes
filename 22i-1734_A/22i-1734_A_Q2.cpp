//============================================================================
// Name        : Q2.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<iostream>
using namespace std;

class Car {
	
	private:
		float Fuel_efficiency;
		float FuelLevel;
	public:
		//----------- constructor ---------------//
		Car(float Fuel_E, float = 0.0);
		//--------------- Setter or  mutator-----//
		void setFuel_efficiency(float);
		void setFuelLevel(float);
		//---------------- Gettter or Accessor ---//
		float getFuel_efficiency()const;
		float getFuelLevel()const;
		// ----- other utility functions ---------//
		void drive (float);	
		void tank(float);
		//------------------ Destructor ----------//
		~Car();	
};


	
	//----------- constructor ---------------//
		Car :: Car(float fuel_E, float fuel_L){
			
			Fuel_efficiency = fuel_E;
			FuelLevel = fuel_L;
		}
	//--------------- Setter or  mutator-----//
		void Car ::  setFuel_efficiency(float FE){
			Fuel_efficiency = FE;
		}
		void Car :: setFuelLevel(float FL){
			FuelLevel = FL;
		}
	//---------------- Gettter or Accessor ---//
		float Car :: getFuel_efficiency()const{
			return Fuel_efficiency;
		}
		float Car :: getFuelLevel()const{
			return FuelLevel;
		}
			
	// ----- other utility functions ---------//
		void Car :: drive (float distance){
				float EF = distance/Fuel_efficiency;
				FuelLevel -= EF;
		}	
		void Car :: tank(float TF){
			this->FuelLevel+= TF;
			
		}
	//------------------ Destructor ----------//
		Car :: ~Car(){
			//cout<<"\n Dectructor call"<<endl;
		}	

int main(){
	
	Car myBeemer(29); 
	cout<<"\n"<<myBeemer.getFuelLevel()<<endl; 
	myBeemer.tank(20); 
	cout<<myBeemer.getFuelLevel()<<endl; 
	myBeemer.drive(100); 
	cout<< myBeemer.getFuelLevel()<<endl; 
	
	return 0;
}
