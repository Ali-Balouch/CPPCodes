#include<iostream>
using namespace std;

int main(){
	
	int Ali = 10;
	char Ali_1 = 'A';
	float Ali_2 = 3.7;
	double Ali_3 = 3.7965;
	int *ptr1 = &Ali;
	char *ptr2 = &Ali_1;
	float *ptr3 = &Ali_2;
	double *ptr4 = &Ali_3;
	cout<<" int  =    "<<ptr1<<" Value = "<<*ptr1<<"\t Store Val = "<<Ali<<endl;
	cout<<" Char  =   "<<ptr2<<" Value = "<<*ptr2<<"\t Store Val = "<<Ali_1<<endl;
	cout<<" Float  =  "<<ptr3<<" Value = "<<*ptr3<<"\t Store Val = "<<Ali_2<<endl;
	cout<<" Double  = "<<ptr4<<" Value = "<<*ptr4<<"\t Store Val = "<<Ali_3<<endl;
	
	cout<<"---------------------------"<<endl;
	cout<<ptr2<<endl;   // why not address printed here? // output = A (which is value) 
	cout<<&Ali_1;      // Same output here
	return 0;
}
