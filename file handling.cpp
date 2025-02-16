#include<iostream>
#include<fstream>
using namespace std;


int main(){
	
	ofstream ofile;
	ofile.open("MyFirstfile.txt");
	ofile<<"\n Hi,\n My name is Muazam Ali Balouch.\n My age is 23 and i am studing at Fast."<<endl;
	for(int i=0; i<10; i++){
		for(int j=0; j<i; j++){
			ofile<<" ";
			ofile<<" * "<<" ";
		}
		ofile<<endl;
	}
	ofile<<endl;
	int n=4;
	for(int i=1;i<=10; i++ ){
		ofile<<n<<" X "<<i <<" = "<<i*n<<endl;
	}
	
	ofile.close();
}
