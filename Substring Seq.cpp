#include<iostream>
#include<cstring>

using namespace std;

void Subseq(string strr, string answer){
	
	if(strr.length()==0){
		cout<<answer<<endl;
		return;
	}
		
	char ch = strr[0];
	
	string ros = strr.substr(1);
	
	Subseq(ros, answer);
	Subseq(ros, answer+ch);
	
}


int main(){
	
	Subseq("ABC", "");
	return 0;
}
