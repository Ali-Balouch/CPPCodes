#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;

int** Product (int ** matrix1, int ** matrix2, int r1, int c1, int r2, int c2);


int main(){
	
	srand(time(0));
	int c1=0, c2=0, r1=0, r2=0;
	int **A =0; 
	A = new int*[r1];
	for(int i=0; i<c1; i++){
		*(A + i) = new int [c1];
	}
	//------------------- 2nd matrix -------------------
	int **B = 0; 
	B = new int*[r2];
	for(int i=0; i<c2; i++){
		*(B + i) = new int [c2];
	}
	
	
//------------------ Input Rows And Columns -----------------------------
	cout<<"Enter values of Rows and Columns: ";
	cin>>r1>>c1>>r2>>c2;
	while(c1 != r2){
		cout<<"Re_Enter Values : ";
		cin>>r1>>c1>>r2>>c2;
	}
	cout<<endl;
//------------------ Assigning random values to Arrays ---------------------
	for(int i=0; i<r1;i++){
		for(int j=0; j<c1; j++){
			*(*(A+i)+ j) =1 + rand()%5;	
		}
	}
	for(int i=0; i<r1;i++){
		for(int j=0; j<c1; j++){
			*(*(B+i)+ j) =1 + rand()%4;	
		}
	}
	
//-------------------- Function Call ----------------------------------	
	
	int **ptr = 0;
	ptr = Product(A, B, r1, c1, r2, c2);
	
	for(int i=0; i<r1;i++){
		for(int j=0; j<c1; j++){
		cout<<*(*(ptr+i)+ j)<<" ";	
		}
	cout<<endl;
	}
	
	for(int i=0; i<c1; i++){
		delete[] *(A+i);
	}
	delete[] A;
	A = 0;
	
	for(int i=0; i<c2; i++){
		delete[] *(B+i);
	}
	delete[] B;
	B = 0;
	return 0;
}

//--------------------------------------

int** Product (int ** matrix1, int ** matrix2, int r1, int c1, int r2, int c2){
	
		int p[c1][r2] = {0};
	
	for(int i=0; i<r1;i++){
		for(int j=0; j<c1; j++){
		cout<<*(*(matrix1+i)+ j)<<" ";	
		}
	cout<<endl;
	}
	cout<<"-------------------------------"<<endl;
	
	for(int i=0; i<r1;i++){
		for(int j=0; j<c1; j++){
		cout<<*(*(matrix2+i)+ j)<<" ";	
		}
	cout<<endl;
	}
		
	for(int i=0; i<r1;i++){
		for(int j=0; j<c2; j++){
			for(int k=0; k<c1; k++){
			*(*(p+i)+ j) += *(*(matrix2+i)+ k) + *(*(matrix2+k)+ j);	
		}
	}
}
	cout<<"-------------------------------";
		
		
	return ;
}
