//============================================================================
// Name        : Q5.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<iostream>
#include<iomanip>
using namespace std;

class  Address{
	
	private:
		int HouseNumber;
		int street;
		int ApartmentNumber;
		char* city;
		char* state;
		int PostalCode;
	public:
		Address(int=1, int=2, int = 303,char* = NULL, char* = NULL, int=112233);
		Adress(int=0, int=0, char* = NULL, char* = NULL, int=0);
		void print();
		int getPostalCode();
		~Address();
		
};

bool compareTo(Address A1, Address A2);

	Address :: Address(int HN, int SN, int APTN,char*C, char*S , int PC)
	{	
		cout<<"\n Enter House Number : ";
		cin>>HN;
		while(HN<0){
			cout<<"\n House Number cannot be negative,please Re-enter: ";
			cin>>HN;
			}
		HouseNumber = HN;
		cout<<"\n Enter Street Number : ";
		cin>>SN;
		while(SN<0){
			cout<<"\n Street Number cannot be negative,please Re-enter: ";
			cin>>SN;
			}
		street = SN;
//		cout<<"\n Enter Apartment Number : ";
////		cin>>APTN;
//		while(APTN<0){
//			cout<<"\n Aprtment Number cannot be negative,please Re-enter: ";
//			cin>>APTN;
//			}
		ApartmentNumber = APTN;
		
		C = new char[30];
		S = new char[30];
		for(int i=0;i<30; i++){
			C[i] = '\0';
			S[i] = '\0';
		}
		
		cout<<"\n Enter City Name : ";
		cin.ignore();
		cin.get(C, 30);
		cin.ignore();
		city = C;
		cout<<"\n Enter State Name : ";
		cin.get(S, 30);
		//cin.ignore();
		state = S;
		cout<<"\n Enter PostalCode : ";
		cin>>PC;
		while(PC<0){
			cout<<"\n PostalCode cannot be negative,please Re-enter: ";
			cin>>PC;
			}
		PostalCode =  PC;
		
	}

	Address :: 	Adress(int HN, int SN, char* C, char* S , int PC)
	{
		cout<<"\n Enter House Number : ";
		cin>>HN;
		while(HN<0){
			cout<<"\n House Number cannot be negative,please Re-enter: ";
			cin>>HN;
			}
		HouseNumber = HN;
		cout<<"\n Enter Street Number : ";
		cin>>SN;
		while(SN<0){
			cout<<"\n Street Number cannot be negative,please Re-enter: ";
			cin>>SN;
			}
		street = SN;
		
		C = new char[30];
		S = new char[30];
		for(int i=0;i<30; i++){
			C[i] = '\0';
			S[i] = '\0';
		}
		
		cout<<"\n Enter City Name : ";
		cin.ignore();
		cin.get(C, 30);
		cin.ignore();
		city = C;
		cout<<"\n Enter State Name : ";
		cin.get(S, 30);
		cin.ignore();
		state = S;
		cout<<"\n Enter PostalCode : ";
		cin>>PC;
		while(PC<0){
			cout<<"\n PostalCode cannot be negative,please Re-enter: ";
			cin>>PC;
			}
		PostalCode =  PC;
	}
	
	void Address :: print(){
		cout<<setw(5);
		cout<<"\n House Number : "<<HouseNumber<<"\t Street Number : "<<street<<"\t Apartment Number : "<<ApartmentNumber<<endl;
		cout<<"\n City : "<<city<<"\t  State : "<<state<<"\t  Postal Code : "<<PostalCode<<endl;
	
	}
	int Address :: getPostalCode(){
		return PostalCode;
	}
	Address :: ~Address(){
		delete[] city;
		delete [] state;
		//cout<<"\n Constructor"<<endl;
	}
	
	bool compareTo(Address A1, Address A2){
		if(A1.getPostalCode() < A2.getPostalCode())
			return 1;
		else
			return 0;
	}

int main(){
	
	Address A1;
	A1.print();
	Address A2;
	A2.print();
	cout<<"\n Whether one address comes before another : "<<boolalpha<<compareTo(A1, A2);
	return 0;
}
