#include<iostream>
using namespace std; 

void PrintNum(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	PrintNum(n-1);
}
void Triangle(int n, int i){
	if(n==0)
		return;
	PrintNum(i);
	cout<<endl;
	Triangle(n-1, i+1);
}

int main(){
	int n=5;
	Triangle(n,1);
	return 0;
}
