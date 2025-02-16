#include<iostream>
using namespace std;

string keypadArr[10] = {"", "", "abc","def","ghi","jkl","mno","pqr","stuv","wxyz"};
void Keypad(string s, string ans){
	if(s.length() == 0){
		cout<<ans<<endl;
		return;
	}
	
	char ch = s[0];
	string code = keypadArr[ch-'0'];
	string ros = s.substr(1);
	
	for(int i=0; i<code.length();i++){
		Keypad(ros, ans + code[i]);
	}
}

int main(){
	Keypad("234","");
	return 0;
}
