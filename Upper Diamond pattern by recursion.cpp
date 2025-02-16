#include<iostream>
using namespace std;

void space(int start){
	if(start>0){
		space(start-1);
		cout<<" ";
	}
}

void printcharacter(int col, int start, char ch){
	
	if(col<=0){
		return;
	}
	else{
		
		
		printcharacter(col-1,start, ch);
		cout<<ch<<" ";
	}
}

void pattern(int row, int col, int start,char ch ){
	
	if(row>0){
		space(start-1);
		printcharacter(col,start, ch);
		cout<<endl;
		pattern(row-1, col+1,start-1, ch);
	}
}

int main(){
	int row =10, col=1,start =10;
	char ch = '*';
	
	pattern(row,col,start,ch);	
	pattern(row-1,col,start,ch);
	pattern(row-2,col,start,ch);
	
	return 0;
}
