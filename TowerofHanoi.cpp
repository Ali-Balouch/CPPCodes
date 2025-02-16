#include<iostream>
using namespace std;

void TowerofHanoi(int n, char src, char helper, char dest){
	
	if(n==0)
		return;
	
	TowerofHanoi(n-1,src,dest,helper);
	cout<<"Move From "<<src<<" to "<<dest<<endl;
	TowerofHanoi(n-1,helper,dest,src);
}

int main(){
	TowerofHanoi(3,'A','C','B');
	return 0;
}
