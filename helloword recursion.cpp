#include<iostream>
using namespace std; 

void Rectangle(int n){
	if(n==0){
		return;
	}
	else{
		if(n==0)
			return;
		else{
			cout<<n<<" Helo_World ";
			cout<<endl;
			return Rectangle(n-1);
		}
	cout<<n<<" Helo_World ";
	cout<<endl;
	return Rectangle(n-1);
	}
	cout<<endl;
}

int main(){
	int n=5;
	Rectangle(n);
	return 0;
}
