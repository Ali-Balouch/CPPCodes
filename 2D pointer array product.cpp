#include<iostream>
#include<ctime>
#include<cstdlib>
#define r1 4
#define c1 4
#define r2 4
#define c2 4

using namespace std;

int main(){
	srand(time(0));  int count=0;
	int **arr1= 0;
	int **arr2= 0;
	int arr3[4][4] = {0};
	arr1 = new int*[r1];
	arr2 = new int*[r2];
	for(int i=0; i<c1; i++){
		*(arr1 + i) = new int[c1];
	}
	for(int i=0; i<c2; i++){
		*(arr2 + i) = new int[c2];
	}
	//----------------------------------------
	for(int i=0; i<r1; i++){
		for(int j=0;j<c1; j++){
			*(*(arr1 + i) + j) =rand()%9; 
		}
	}
	//----------------------------------------
	for(int i=0; i<r2; i++){
		for(int j=0;j<c2; j++){
			*(*(arr2 + i) + j) = rand()%9; 
		}
	}
	//---------------------------------------
	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	for(int i=0; i<r1; i++){
		for(int j=0;j<c1; j++){
			cout<<*(*(arr1 + i) + j)<<" "; 
		}
		cout<<endl;
	}
	//---------------------------------------
	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	for(int i=0; i<r2; i++){
		for(int j=0;j<c2; j++){
			cout<<*(*(arr2 + i) + j)<<" "; 
		}
		cout<<endl;
	}	
	for(int i=0; i<r1; i++){
		for(int j=0;j<c2; j++){
			for(int k=0; k<c1; k++){
			arr3[i][j] += arr1[i][k] * arr2[k][j] ;
			}
		}
	}
	//----------------------------------------	
	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl;
	for(int i=0; i<r1; i++){
		for(int j=0;j<c1; j++){
			cout<<*(*(arr3 + i) + j)<<" "; 
		}
		cout<<endl;
	}	
	//--------------------------------------
	
	for(int i=0; i<c1; i++){
		delete[] *(arr1 + i);
	}
	for(int i=0; i<c2; i++){
		delete[] *(arr2 + i);
	}
	delete[] arr1;
	delete[] arr2;
	arr1 = 0;
	arr2 = 0;
	return 0;
}
