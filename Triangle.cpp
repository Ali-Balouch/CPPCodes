#include<iostream>
using namespace std;

void Space(int space){
	
	if(space==0)
		return;
	cout<<" ";
	Space(space-1);
}

void Print(int p){
	if(p==0)
		return ;
	cout<<"*"<<" ";
	Print(p-1);
}

void Pattern(int n, int i){
	
	if(n>0){
		Space(n-1);
		Print(i-n+1);
		cout<<endl;
		Pattern(n-1, i);
	}
}

int main(){
	Pattern(10, 10);
	return 0;
}
