#include<iostream>
using namespace std; 

void Rectangle(int n){
	if(n==0){
		return;
	}
	else{
		cout<<"*****"<<endl;
		return Rectangle(n-1);
	}
	cout<<endl;
}

int main(){
	int n=5;
	Rectangle(n);
	return 0;
}
