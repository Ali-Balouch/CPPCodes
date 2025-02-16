#include <iostream>
using namespace std;


//Helping function to print alphabets

char printalphabet(int start, char ch){
	
	if(start<=0)
		return ch;
	else{
		
		cout<<ch<<" ";
		return printalphabet(start-1, ch+1);
	}
}

void printpattern(int rows, int start, char ch){
	
	if(rows>0){
		ch = printalphabet(start, ch);
		cout<<endl;
		printpattern(rows-1, start+1, ch);
	}
}




int main(){

  int rows=4,start=1;
	char ch='A';
	printpattern(rows,start,ch);

  return 0;
}
