//============================================================================
// Name        : Q10.cpp
// Author      : Muazam Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Array.cpp"
#include <iostream>
using namespace std;

int main() {

	Array A1(10);
	
	Array A2 = A1;
	A1.assign(2, 5);
	A1.display();
	A2.display();
	cout<<"\n Length = "<<A1.length()<<endl;
	A1.find(5);
	Array A3;
	A3 =A1.find(5);
	A3.display();
	cout<<"IsEmpty = "<<A1.isEmpty();
	cout<<"\n Insert = "<<A2.insert(2,7)<<endl;
	//A2.display();
	A1.setAt(0,7);
	A1.display();
	
	return 0;
}
