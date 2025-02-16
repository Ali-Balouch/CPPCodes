#include<iostream>
using namespace std;

void BinarySearch(int arr[][4], int find){

//-------------- Sorting 2D array --------------------------//	
	int temp =0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4; j++){
			for(int k=0; k<4; k++){
				for(int n=0;n<4; n++){
					if(arr[i][j] > arr[k][n]){
						temp = arr[i][j];
						arr[i][j] = arr[k][n];
						 arr[k][n] = temp;
						
					}
				
				}
			}	
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4; j++){
			if(arr[i][j] == find )
				cout<<"("<<i<<","<<j<<")"<<endl;
			else if(arr[i][j] > find )
				arr[i][j-1];
			else if(arr[i][j] < find )
				arr[i][j+1];
			else
				cout<<"Error "<<endl;
						
		}
	}
	
} 
int main(){
	
	int arr[4][4] = {{10,20,30,40}, {15,25,35,45}, {27,29,37,48}, {32,33,39,50}};
		
	BinarySearch(arr, 29);
}
