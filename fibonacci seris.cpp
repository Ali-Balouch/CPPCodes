#include<iostream>
using namespace std;

int fib(int n){
	if(n==0|| n==1)
		return 1;
	else
		cout<<"N = "<<n<<endl;
		return fib(n-1) + fib(n-2);
		cout<<"N = "<<n<<endl;
		
}

int main(){
	int n=0;
	cout<<"\n Enter value of N: ";
	cin>>n;
	cout<<fib(n);
	
	return 0;
}
