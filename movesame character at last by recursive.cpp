#include<iostream>
#include<cstring>

using namespace std;

string movesameatlast(string strr){
	
	if(strr.length()==0)
		return "";
	char ch = strr[0];
	
	string answer = movesameatlast(strr.substr(1));
	
	if(ch == 'a')
		return answer+ch;
		
	return ch+answer;
}


int main(){
	
	cout<<movesameatlast("MaaUaAaZaAaM aAaLaI ");
	return 0;
}
