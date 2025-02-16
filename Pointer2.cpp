#include<iostream>
using namespace std;

int main(){

	int a = 10; 
	char c = 'a'; 
	int * aptr = NULL;//No address in pointer 
	char *cptr = 0;//No address in pointer
	aptr = &a;//Integer varible address stores in pointer
	cptr = &c; 
	cout << endl; 
	cout << "\nAdress of variable \"a\" OR Value of pointer \"aptr\" is "<<aptr <<" :::: "<<&a <<endl; 
	cout << "\nDerefernece or Indirection through pointer or variable \"a\" is " <<
	*aptr << " ::::: " <<a<<endl;//Indirection/Dereference opertor
	cout << "\nAdress of variable \"c\" OR Value of pointer \"cptr\" is " << cptr << " " << &c << endl; 
	cout << "\nDErefernece or Indirection through pointer or variable \"c\" is " <<
	*cptr << " " << c << endl;//Indirection/Dereference opertor
	cout << "\nSize of Char pointer" << sizeof(cptr);//Size of Character Pointer
	cout << "\nSize of int pointer" << sizeof(aptr);//Size of integer pointer
	cout << "\nSize of int varible" << sizeof(a);//Size of integer varible
	cout << "\nSize of char varible" << sizeof(c);//Size of char varible


	return 0;
}



