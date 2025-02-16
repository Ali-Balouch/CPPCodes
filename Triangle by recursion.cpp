#include<iostream>
using namespace std;


void TriangleRows(int num){
	
	if(num == 0)
		return ;
		
	TriangleRows(num-1);
	cout<<"*"<<" ";	
}

void TriangleCol(int num){
	
	if(num>0){
		TriangleCol(num-1);		// if below the Tringle row the reverse pattern
								
		TriangleRows(num);		
		cout<<endl;
	
	}
}


int main(){
	
	TriangleCol(5);
	return 0;
	}
