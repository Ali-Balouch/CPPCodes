//============================================================================
// Name        : Q6.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

class Account{
	
	private:
		float  balance;
	public:
		Account();
		void deposit(float=0.0);
		bool withdraw(float);
		float inquire ();
		~Account();
};


		Account :: Account(){
			float IB=0.0;
			balance = IB;
		}
		void Account :: deposit(float AddMoney){
			cout<<"\n Add Money : ";
			cin>>AddMoney;
		while(AddMoney<0){
			cout<<"\n Money cannot be negative,please Re-enter: ";
			cin>>AddMoney;
			}
			balance = AddMoney;
		}
		bool Account :: withdraw(float wdMoney){
			cout<<"\n How much Money You Wanted to Withdraw : ";
			cin>>wdMoney;
		while(wdMoney<0){
			cout<<"\n Money cannot be negative,please Re-enter: ";
			cin>>wdMoney;
			}
		cout<<"\n WithDraw Money :  $"<<wdMoney<<endl;
			if(wdMoney > balance){
				cout<<"\n Sorry, your balace is insufficient."<<endl;
				this->balance -= 5;
				return 0;
			}
			else{
				cout<<"\n Transaction is Done."<<endl;
				this-> balance -= wdMoney;
				return 1;
			}
		}
		float Account :: inquire (){
			return balance;
		}
		Account :: ~Account(){
			//cout<<"\n Constructor call"<<endl;
		}



int main(){
	
	Account p1;
	cout<<"\n Initial Balance : $"<<p1.inquire()<<endl;
	p1.deposit(2000.0);
	cout<<"\n Add Balance : $"<<p1.inquire()<<endl;
	cout<<"\n Transaction status : "<<boolalpha<<p1.withdraw(2200.0)<<endl;
	cout<<"\n Remaining Balance : $"<<p1.inquire()<<endl;
	return 0;
}
