
#include<iostream>
using namespace std;

//bool Sorted(int arr[], int n){
//	if(n==1){
//		return 1;
//	}
//	
//	bool prev = Sorted(arr+1 , n-1);
//		
//	return ( arr[0] < arr[1] && prev );
//	
//}

//-----------------------------------------------------------------------


int Firstocc(int arr[], int n, int i, int key){
	
	if(i==n){
		return -1;
	}
	if(arr[i] == key){
		return i;
	}
	
	return Firstocc(arr, n, i+1, key);
}

int Lastocc(int arr[], int n, int i, int key){
	if(i==n)
		return -1;
	int previous = Lastocc(arr, n, i+1, key);
	
	if(previous != -1){
		return previous;
	}
	if(arr[i] == key){
		return i;
	}
	else
	return -1;
}



int main() 
{ 
	int  arr[] = {1,6,3,2,3};
	cout<<Firstocc(arr, 5, 0, 3)<<endl;
	cout<<Lastocc(arr, 5, 0, 3)<<endl;
return 0; 
} 
