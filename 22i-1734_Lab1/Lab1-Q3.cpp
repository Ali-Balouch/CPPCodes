#include<iostream>
using namespace std;

void linearSearch(int arr[][4],int find){
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4; j++){
			if(arr[i][j] == find)
				cout<<"("<<i<<","<<j<<")"<<endl;
		}
	}
	
}

int main(){
	
	int arr[3][4] ={{12,43,66,78}, {34,21,72,81}, {7,13,2,59}};
	
	linearSearch(arr,2);
	
	
	return 0;
}
