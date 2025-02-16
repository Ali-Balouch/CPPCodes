#include<iostream>
#include<cstring>
using namespace std;

class student{
	private:
	
		string name;
		int id;
		int age;
	
	public:
		void setName(string);
		void setID(int);
		void setAge(int);
	
		void getName();
		void getID();
		void getAge();
};

//-----------------------------------------


void student :: setName(string s){
	name = s;
}

void student :: setID(int i){
	id = i;
}
void student :: setAge(int a){
	age = a;
}

void student :: getName(){
	cout<<"Name : "<<name<<endl;
}

void student :: getID(){
	cout<<"Student ID : "<<id<<endl;
}

void student :: getAge(){
	cout<<"Student Age : "<<age<<endl;
	cout<<endl;
}


int main(){
	
	student s1;
	student s2;
	student s3;
	student s4;
	student s5;
//--------------------- s1  ---------------

s1.setName("Muazam Ali");
s1.setID(1734);
s1.setAge(18);	

s1.getName();	
s1.getID();
s1.getAge();
///--------------------- s2 --------------

s2.setName("Mustansir Hussain");
s2.setID(1733);
s2.setAge(19);	

s2.getName();	
s2.getID();
s2.getAge();

//---------------------- s3 ---------------

s1.setName("Muhammad Ali");
s1.setID(1765);
s1.setAge(20);	

s1.getName();	
s1.getID();
s1.getAge();

//----------------------- s4 ----------------

s1.setName("Arshad");
s1.setID(1784);
s1.setAge(24);	

s1.getName();	
s1.getID();
s1.getAge();

//----------------------- s5 ----------------

s1.setName("Abdullah");
s1.setID(1634);
s1.setAge(28);	

s1.getName();	
s1.getID();
s1.getAge();



	return 0;
}
