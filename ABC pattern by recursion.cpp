#include<iostream>
using namespace std;


char Trianglecol(int start, char ch){
	if(start <= 0)
		return ch;
	else{
	cout<<ch<<" ";	
	return Trianglecol(start-1, ch+1);
	}
}

void Trianglepattern(int row, int start, char ch){
	
	if(row>0){
								
		ch = Trianglecol(start, ch);		
		cout<<endl;
		Trianglepattern(row-1,start+1, ch);
	}
}


int main(){
	
	Trianglepattern(5, 1,'A');
	return 0;
}
