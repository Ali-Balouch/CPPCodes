#include<iostream>
using namespace std; 
static int counter = 0;
int count(int x){
	
	if(x<=9 && x>=1){
		counter++;
		return counter;
	}
	else{
		if(x % 10 == x){
			counter ++;
		return counter;
		}
		else{
			x/=10;
			counter++;
			return count(x);
		}	
	} 
	return counter;
}

int main(){
	int num =0;
	cout<<"\n Enter a NUmber : ";
	cin>>num;
	cout<<"\n Counter = "<<count(num)<<endl;	
	
	return 0;
}
