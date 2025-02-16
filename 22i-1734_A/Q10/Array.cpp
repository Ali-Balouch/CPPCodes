/*
 * Array.cpp
 *
 *  Created on: Mar 18, 2023
 *      Author: Muazam Ali
 */

#include "Array.h"
using namespace std;

	Array  :: Array(){
		int s=10;
		Size = s;
		myarr = new int [Size]{0};

	} // a default constructor
	Array  :: Array (int size){
		this->Size = size;
		myarr = new int[Size];
		cout<<"\n Enter Elements of Array: ";
		for(int i=0;i<Size; i++)
			cin>>myarr[i];
	} // a parameterized constructor initializing an Array of predefined J size
	Array  :: Array (int *arr, int size){

		this->Size = size;
		arr = new int [Size];
		myarr = new int[Size];
		for(int i=0; i<Size; i++)
			this->myarr[i] = arr[i];
	} // initializes the Array with an existing Array
	Array  :: Array (const Array & c1){
			this->Size = c1.Size;
			myarr = new int [Size];
			for(int i=0; i<Size; i++)
					this->myarr[i] = c1.myarr[i];
	}// copy constructor
	int Array  :: getAt(int j){
		if(j < Size){
			for(int i=0;i<Size; i++){
				if(i == j)
					return myarr[j];
			}
		}
	}// returns the integer at index [j]

	void Array :: setAt(int i, int val){

		if(i < Size){
			for(int j=0; j<Size; j++){
				if(j == i)
					myarr[j] = val;
				}
			}
	} // set the value at index [i]

	Array Array:: subArr (int pos, int siz){
		Array A1;
		if(siz < Size){
			if(pos <=siz){
				for(int i=pos; i<siz; i++){
					A1.myarr[i] = myarr[i];
				}
				return A1;
			}
			else
				cout<<"\n Invalid Arguments."<<endl;
		}
	} // returns a sub-Array of size siz starting from location 'pos'
	Array Array:: subArr (int pos){
		Array A1;

		if(pos <=Size){
			for(int i=pos; i<Size; i++){
				A1.myarr[i] = myarr[i];
				}
			return A1;
			}
			else
				cout<<"\n Invalid Arguments."<<endl;
	} // returns a sub-Array from the given position to the end.

	int Array  :: subArrPointer (int pos, int siz){
		Array A1;
			int count=0;
		if(siz < Size){
			if(pos <=siz){
				for(int i=pos; i<siz; i++){
					count++;
				}
				return count;
			}
			else
				cout<<"\n Invalid Arguments."<<endl;
		}
	} // returns an array of size siz starting from location 'pos'
int Array  :: subArrPointer (int pos){
		Array A1;
			int count=0;
				if(pos <=Size){
					for(int i=pos; i<Size; i++){
						count++;
					}
					return count;
				}
				else
					cout<<"\n Invalid Arguments."<<endl;
}// returns an array from the given position to the end.
void Array :: push_back(int a){
	Array A1;
	int s=1;
	Size+=s;
	myarr = new int[Size];
	for(int i=0; i<Size; i++)
		if(i == (Size-1))
			myarr[i]= a;
		else
			this->myarr[i] =A1.myarr[i];

} // adds an element to the end of the array
int Array  :: pop_back(){
	Array A1;
		int s=1;
		Size-=s;
		myarr = new int[Size];
		for(int i=0; i<Size; i++)
			if(i == (Size-1))
				this->myarr[i] =A1.myarr[i];
} // removes and returns the last element of the array
int Array  :: insert (int idx, int val){
	if(idx < Size){
				for(int j=0; j<Size; j++){
					if(j == idx)
						myarr[j] = val;
					int temp = myarr[j];
						myarr[j]= myarr[j+1];
						myarr[j+1] = temp;
						return 1;
					}
				}
	else
		return -1;
} // inserts the value val at idx. Returns 1 for a →successful insertion and -1 if idx does not exists or is invalid. Shift the elements after idx to the right.is
int Array  :: erase (int idx, int val){
	if(idx < Size){
					for(int j=0; j<Size; j++){
						if(j == idx){
							myarr[j] = val;
							myarr[j-1]= myarr[j];
							return 1;
						}
					}
			}
			else
				return -1;
} // erases the value val at idx. Returns 1 for a successful deletion and -1 if idx does not exists or is invalid. Shift the elements after idx to the left.
void Array :: size(){
	cout<<"\n Size of Array: "<<sizeof(myarr)<<endl;
}
int Array  :: length(){
	return Size;
} // returns the size of the Array
void Array :: clear(){
	myarr[Size] ={0};
}//clears the contents of the Array
int Array  :: value (int idx){
	if(idx < Size){
				for(int i=0;i<Size; i++){
					if(i == idx)
						return myarr[idx];
				}
			}
} //returns the value at idx
void Array :: assign (int idx, int val){
	if(idx < Size){
				for(int j=0; j<Size; j++){
					if(j == idx)
						myarr[j] = val;
					}
				}
} //assigns the value val to the element at index idx
void Array :: copy (const Array& Arr){
	this->Size = Arr.Size;
				myarr = new int [Size];
				for(int i=0; i<Size; i++)
						this->myarr[i] = Arr.myarr[i];
} // Copy the passed Array
void Array :: copy (const int *arr, int siz){
		myarr = new int [siz];
					for(int i=0; i<siz; i++)
							myarr[i] = arr[i];
} // copy the passed array
void Array :: display (){
	cout<<"\n Display Array : ";
	for(int i=0;i<Size; i++)
		cout<<" "<<myarr[i]<<" ";
	cout<<endl;
}// displays the Array
bool Array :: isEmpty(){
	if(myarr == NULL)
		return 1;
	else
		return 0;
} // returns true if the Array is empty
Array Array:: find (int a){
	Array Arr;
	int j=0;
	int k = 0;
	delete []Arr.myarr;
	for(int i=0;i<Size;i++){
        if(myarr[i] == a){
            k++;
        }
	}
	Arr.myarr = new int[k];
	Arr.Size = k;
	for(int i=0;i<Size; i++){
		if(myarr[i] == a)
			Arr.myarr[j++] = i;
	}
	return Arr;
} // returns an Array containing all the indexes of integer being searched
bool Array :: equal (const Array& A1){
	if(sizeof(myarr) == sizeof(A1.myarr)){
		for(int i=0; i<Size; i++){
			if(myarr[i] == A1.myarr[i])
				return 1;
		}
	}
	else
		return 0;
} // should return true if both Arrays are samez
int Array  :: sort(){
	int temp=0;
	for(int i=0; i<Size; i++){
		if(myarr[i] > myarr[i+1]){
			temp = myarr[i];
			myarr[i] = myarr[i+1];
			myarr[i+1] = temp;
			}
	}
	return 1;
}// sorts the Array. Returns true if the array is already sorted
void Array :: reverse (){
	int i=0;
	int last = myarr[Size-i];
			int first = myarr[i];
	while(i<(Size/2)){
		myarr[i] = last;
		last = first;
		first =myarr[i+1];
	i++;
	}
}// reverses the contents of the array
	Array  :: ~Array (){
		delete[]myarr;
	}// destructor.

