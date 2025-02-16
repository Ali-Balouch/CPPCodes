#include<iostream>
using namespace std;

void ReplaceValue(string str){
	if(str.length() == 0){
		return;
	}
	if((str[0]=='p' || str[0]=='P') && (str[1] == 'i'|| str[1] == 'I')){
		cout<<"3.14";
		ReplaceValue(str.substr(2));
	}
	else{
		cout<<str[0];
		ReplaceValue(str.substr(1));
	}
}

int main (){
	ReplaceValue("piqwewippiiipiprshevdvpiPi");	
	return 0;
}
