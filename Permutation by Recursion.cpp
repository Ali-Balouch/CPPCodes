#include<iostream>
using namespace std;

void Permutation(string str, string retn){
	if(str.length() == 0){
		cout<< retn <<endl;
		return;
	}
	char ch = 0;
	string ros="";
	
		for(int i=0; i<str.length(); i++){
			ch  = str[i];
			ros = str.substr(0,i) + str.substr(i+1);
			Permutation(ros, retn+ch);
		}
	
}
int main(){
	
	Permutation("ABCD", "");
	return 0;
}
