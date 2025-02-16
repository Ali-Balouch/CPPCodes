#include<iostream>
using namespace std;

int Sum(int a[], int size){
	if(size==1){
		return a[0];  
	}
	else{
	return a[0] + Sum(a+1, size-1);
	}
}

int main(){
	
	int A [10] = {1,2,3,4,5};
	cout<<"\n Sum of Array = "<<Sum(A, 10)<<endl;
	return 0;
}
