#include<iostream>
using namespace std;

class Student{
	
	private:
		char *Name;
		char *Rollno;
		float Eng;
		float Math;
		float Oops;
		float Df;
		float Cps;
	public:
		Student(char* =NULL, char* =NULL, float=0.0, float=0.0, float=0.0, float=0.0, float=0.0);
		int Averge();
		// Arithmetic operator 
		Student operator=(Student &);
		Student operator+(Student &);
		Student operator-(Student &);
		Student operator*(Student &);
		Student operator/(Student &);
		// Uniry operator
		Student operator++();
		Student operator++(int);
		// Relational or comparison operator
		bool operator>(Student &);
		bool operator<(Student &);
		bool operator==(Student &);
		bool operator!=(Student &);
		bool operator<=(Student &);
		bool operator>=(Student &);
		// Logical operator
		bool operator&&(Student &);
		bool operator||(Student &);
		bool operator!(void);		
	
	friend ostream& operator<<(ostream &, Student &);
	friend istream& operator>>(ostream &, Student &);
	
};

//
ostream& operator<<(ostream &, Student &);
istream& operator>>(ostream &, Student &);


	Student ::	Student(char* name, char* rollno, float eng, float math, float oops, float df, float cps){
			
			name = new char[20];
			cout<<"\n Enter Your Name : ";
			cin.get(name, 20);
			this->Name = name;
			cin.ignore();
			rollno = new char[10];
			cout<<"\n Enter Your RollNo : ";
			cin.get(rollno, 20);
			this->Rollno = rollno;
			cin.ignore();
			
			cout<<"\n Enter Your Marks in English : ";
			cin>>eng;
			this->Eng = eng;
			cout<<"\n Enter Your Marks in Maths : ";
			cin>>math;
			this->Math = math;
			cout<<"\n Enter Your Marks in OOPs : ";
			cin>>oops;
			this->Oops = oops;
			cout<<"\n Enter Your Marks in Differential Equation : ";
			cin>>df;
			this->Df = df;
			cout<<"\n Enter Your Marks in CPS : ";
			cin>>cps;
			this->Cps = cps;
		}
		
	int Student :: Averge(){
		int sum =
		}
		// Arithmetic operator 
	Student Student ::	operator=(Student &S1){
			Student S2;
			S2.
			
		}
	Student Student ::	operator+(Student &);
	Student Student ::	operator-(Student &);
	Student Student ::	operator*(Student &);
	Student Student ::	operator/(Student &);
	// Uniry operator
	Student Student ::	operator++();
	Student Student ::	operator++(int);
	// Relational or comparison operator
	bool Student ::operator>(Student &);
	bool Student ::operator<(Student &);
	bool Student ::operator==(Student &);
	bool Student ::operator!=(Student &);
	bool Student ::operator<=(Student &);
	bool Student ::operator>=(Student &);
	// Logical operator
	bool Student ::operator&&(Student &);
	bool Student ::operator||(Student &);
	bool Student ::operator!(void);		
	
	ostream& operator<<(ostream &, Student &);
	istream& operator>>(ostream &, Student &);




