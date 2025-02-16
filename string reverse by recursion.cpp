#include<iostream>
#include<cstring>

using namespace std;

void Reverse(string arr){
	
	if(arr.length() == 0)
		return;
		
	string ros = arr.substr(1);
	Reverse(ros);
	cout<<arr[0];
}

int main(){
	
string arr = "hcuolaB";
	
	Reverse(arr);
	
	return 0;
}
