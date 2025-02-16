#include<iostream>
using namespace std;

int prod(int a[], int size){
	if(size==0)
		return 0;
	if(size==1){
		return a[0];  
	}
	else{
	return a[0] * prod(a+1, size-1);
	}
}

int main(){
	
	int A [10] = {1,2,3,4,5,6,7,1,1,1};
	cout<<"\n Product of Array = "<<prod(A, 10)<<endl;
	return 0;
}
