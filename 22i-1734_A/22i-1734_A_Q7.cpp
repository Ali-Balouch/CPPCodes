//============================================================================
// Name        : Q7.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	
	private:
		char* Roll_Number;
		char* Name; 
		int Batch;
		char* Courses_Code;
		char* Courses_Name;
		char* Courses_Grades;
		float CGPA;
		char* Degree;
		char* Date_of_Birth;
	public:
		Student(char* =NULL,char* =NULL,int =2022,char* =NULL,char* =NULL,char* =NULL,float= 2.61,char* =NULL,char* =NULL, int=5);
		void setValues(char* =NULL , char* =NULL, int=2022, char* =NULL, char* =NULL, char* =NULL, float=3.5, char* =NULL, char* =NULL, int=5);
		void print();
		int getBatch() const;
		void setBatch(int batch);
		float getCgpa() const;
		void setCgpa(float cgpa);
		char* getCoursesCode() const;
		void setCoursesCode(char *coursesCode);
		char* getCoursesGrades() const;
		void setCoursesGrades(char *coursesGrades);
		char* getCoursesName() const;
		void setCoursesName(char *coursesName);
		char* getDateOfBirth() const;
		void setDateOfBirth(char *dateOfBirth);
		char* getDegree() const;
		void setDegree(char *degree);
		char* getName() const;
		void setName(char *name);
		char* getRollNumber() const;
		void setRollNumber(char *rollNumber);
		~Student();
};
	
	Student :: Student(char* rolnum,char* nam,int batch,char* C_code,char* C_name,char* C_grade,float cgpa,char* degree,char* DOB,int size){
		
			this->Roll_Number = rolnum; 		
			this->Name=nam;
			this->Batch=batch;	 
			this->Courses_Code = C_code;
			this->Courses_Name = C_name;
			this->Courses_Grades = C_grade;	
			this->CGPA = cgpa;
			this->Degree = degree;
			this->Date_of_Birth = DOB;
	}
	void Student :: setValues(char* rolnum,char* nam, int batch,char* C_code,char* C_name,
			char* C_Grade,float cgpa,char* degree, char* DOB, int size){
		
		//-------- Dynamically memory Allocation -------------///	
			rolnum = new char[20];
			nam = new char[20];
			C_code = new char[20];
			C_name = new char[20];
			C_Grade = new char[20];
			degree = new char[20];
			DOB = new char[20];
			
		//--------- Input in pointer array ------------------//	
			//cin.ignore();
			cout<<"\n Enter Your Roll No. : ";
			cin.get(rolnum,20);
			this->Roll_Number = rolnum; 
			cin.ignore();
			cout<<"\n Enter Your Name : ";
			cin.get(nam,20);
			this->Name=nam;
			cin.ignore();
			cout<<"\n Enter Your Batch : ";
			cin>>batch;
			this->Batch=batch;
			cin.ignore();
			cout<<"\n Enter Your Courses Code : ";
			cin.get(C_code,20);
			this->Courses_Code=C_code;
			cin.ignore();
			cout<<"\n Enter Your Courses Name : ";
			cin.get(C_name,20);
			this->Courses_Name=C_name;
			cin.ignore();
			cout<<"\n Enter Your Courses Grades : ";
			cin.get(C_Grade,20);
			this->Courses_Grades=C_Grade;
			cout<<"\n Enter Your CGPA : ";
			cin>>cgpa;	
			this->CGPA = cgpa;
			cin.ignore();
			cout<<"\n Enter Your Degree : ";
			cin.get(degree, 20);
			this->Degree = degree;
			cin.ignore();
			cout<<"\n Enter Your Date of Birth : ";
			cin.get(DOB, 20);
			this->Date_of_Birth = DOB;	
				
		}
	void Student :: print(){
		cout<<"###############################################################################################"<<endl;
		cout<<"#"<<"\n# Student Name: "<<Name<<setw(60)<<" Roll No: "<<Roll_Number<<endl;
		cout<<"#"<<"\n# Date of Birth: "<<Date_of_Birth<<setw(25)<<" Univ.Reg.No: "
		<<Roll_Number<<setw(26)<<" Degree: "<<Degree<<endl;
		cout<<"#"<<endl;
		cout<<"#"<<setw(45)<<" Fall "<<Batch<<endl;
		cout<<"#\n#"<<setw(20)<<Courses_Code<<":"<<setw(10)<<Courses_Name<<setw(10)<<Courses_Grades<<endl;
		cout<<"#"<<setw(80)<<" CGPA = "<<CGPA<<endl;														
		cout<<"###############################################################################################"<<endl;
	}
	int Student::getBatch() const {
	return Batch;
	}

	void Student::setBatch(int batch) {
		Batch = batch;
	}

	float Student::getCgpa() const {
		return CGPA;
	}

	void Student::setCgpa(float cgpa) {
		CGPA = cgpa;
	}

	char* Student::getCoursesCode() const {
		return Courses_Code;
	}

	void Student::setCoursesCode(char *coursesCode) {
		Courses_Code = coursesCode;
	}

	char* Student::getCoursesGrades() const {
		return Courses_Grades;
	}

	void Student::setCoursesGrades(char *coursesGrades) {
		Courses_Grades = coursesGrades;
	}

	char* Student::getCoursesName() const {
		return Courses_Name;
	}

	void Student::setCoursesName(char *coursesName) {
		Courses_Name = coursesName;
	}

	char* Student::getDateOfBirth() const {
		return Date_of_Birth;
	}

	void Student::setDateOfBirth(char *dateOfBirth) {
		Date_of_Birth = dateOfBirth;
	}

	char* Student::getDegree() const {
		return Degree;
	}

	void Student::setDegree(char *degree) {
		Degree = degree;
	}

	char* Student::getName() const {
		return Name;
	}

	void Student::setName(char *name) {
		Name = name;
	}

	char* Student::getRollNumber() const {
		return Roll_Number;
	}

	void Student::setRollNumber(char *rollNumber) {
		Roll_Number = rollNumber;
	}

	Student :: ~Student(){
		delete[]Roll_Number;
		delete[]Name;
		delete[]Courses_Code;
		delete[]Courses_Name;
		delete[]Courses_Grades;
		delete[]Degree;
		delete[]Date_of_Birth;
		//cout<<"\n Destructor call"<<endl;
	}


int main(){
	Student s1;
	s1.setValues();
	s1.print();
	return 0;
}
