#include<iostream>
using namespace std; 

int factorial(int x){
	if (x<=1)
		return x;
	else
		return x * factorial(x-1);
}

int main(){
	
//	int factorial = 1, n=0, i=0;
	int n=0;
	cout<<"\n Enter the Number: ";
	cin>>n;
//	while(i<n){
//		
//		factorial = factorial*i;
//		++i;
//		cout<<"\n Factorial of "<<" i "<<":"<<factorial<<endl; 
//	}
//	cout<<endl;
//	cout<<"\n Factorial of "<<" N "<<":"<<factorial<<endl;
 cout<<"\n Factorial of  "<<n<<" = "<<factorial(n)<<endl;
	
	
	return 0;
}
