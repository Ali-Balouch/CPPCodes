/*
 * String.cpp
 *
 *  Created on: Mar 16, 2023
 *      Author: muazam
 */

#include "String.h"
#include<iostream>
using namespace std;


		// definitions of following functions...

	String ::  String(){
		int s=50;
		this->size = s;
		str1 = new char[size];
		cout<<"\n Enter Char Array Element: ";
		cin.get(str1, 10);
		
		}// default constructor

	String :: String(char* arr){
				int s=0;
				cout<<"\n Enter Size of Array: ";
				cin>>s;
				for(int i=0;arr[i]!='\0'; i++)
						s++;
						this->size = s;
				cin.ignore();
				str1 = new char[size];
				cout<<"\n Enter Element of Array: ";
				cin.get(str1,size);
				
	}// initializes the string with constant cstring

	String ::  String(const String & c1){

		this->size = c1.size;
		str1 = new char[size];
		for(int i=0;i<size; i++)
			this->str1[i] = c1.str1[i];

		} // copy constructor

	String ::  String(int x){

		this->size = x;
		str1 = new char[size];
		cout<<"\n Enter Element of Array: ";
		cin.get(str1,size);
	
	} // initializes a string of pre-defined size

	char String :: getAt(int i){
			char ch='\0';
				for(int j=0; str1[j]!='\0'; j++){
					if(j==i)
						ch = str1[j];
				}
			return ch;
		} // returns the character at index [x]

	void String :: setAt(int i, char c){
			for(int j=0; str1[j]!='\0'; j++)
					if(j==i)
				 str1[j] = c;
		}// set the character at index [x]

	String String :: substr(int pos, int len){
		String temp;
		delete[]temp.str1;
		temp.str1 = new char[len];
		if(pos < len){
			for(int i=pos; i<len; i++ )
				temp.str1[i] = str1[i];
		}
		return temp;

		} // returns a substring of length len from 'pos'

	String String :: substr(int pos){
		int s=0;
		String temp;
		for(int i=0;str1[i]!='\0'; i++)
			  	  s++;
				temp.str1 = new char[s];
				if(pos < s){
					for(int i=pos; i<s; i++ )
						temp.str1[i] = str1[i];
				}
				temp.str1[s] = '\0';
				return temp;

		} // returns substring from the given position to the end.

	void String :: append(char a){

		int s=0;
			for(int i=0;str1[i]!='0'; i++)
					  	  s++;
			this->size = s+1;

			str1 = new char[size];
			for(int i=0; i<size; i++){
				if(i >= (size-1))
					str1[i] = a;
				else
					this->str1[i] = str1[i];
			}
			str1[size] = '\0';
		} // append a char at the end of string

	void String :: append(String str ){

		int s=0, t=0;
			for(int i=0;str1[i]!='\0'; i++)
					  	  s++;
			for(int j=0; str.str1[j]!='\0'; j++)
						t++;
				this->size = s+t;

					str1 = new char[size];
					for(int i=0; i<size; i++){
						if(i >= size-s)//--------start from t size
							this->str1[i] = str.str1[i];
					}
					str1[size] = '\0';
		}// append a String at the end of string

	void String :: append(char *str){

		int s=0, t=0;
		for(int i=0;str1[i]!='\0'; i++)
					s++;
		for(int j=0; str[j]!='\0'; j++)
					t++;
			this->size = s+t;

		str1 = new char[size];
		for(int i=0; i<size; i++){
			if(i >= (size-s))
				str1[i] = str[i];
		}
		str1[size] = '\0';

		} // append a constant c string at the end of string
	int String :: length(){
		int len=0;
		for(int i=0; str1[i]!='\0'; i++)
			++len;
		return len;

	}// returns the length of string

	char* String :: tocstring(){

		return str1;
		} // converts a String to c-string

	void String :: display(){
		cout<<"\n String is: "<<str1<<endl;
		}// displays the string..

	bool String :: isEmpty(){

		if((str1 == NULL))
			return 1;

		} // returns true if string is empty..
	void String :: copy(const String&c1){

		this->size = c1.size;
				str1 = new char[size];
				for(int i=0;i<size; i++)
					this->str1[i] = c1.str1[i];
		} // Copy one string to another ...
	void String :: copy(const char *arr){
		int s=0, t=0;
				for(int i=0;str1[i]!='\0'; i++)
							s++;
				for(int j=0; arr[j]!='\0'; j++)
							t++;
					this->size = s+t;

				str1 = new char[size];
				for(int i=0; i<size; i++){
					if(i >= (size-s))
						str1[i] = arr[i];
				}
				str1[size] = '\0';

		}// copy cstring to String...
	int String :: find(char a){
		for(int i=0; str1[i]!='\0'; i++)
			if(str1[i] == a)
				return i;

		} // returns the index of character being searched.
	bool String :: equal(String p){
		int s=0, t=0;
				for(int i=0;str1[i]!='0'; i++)
							s++;
				for(int j=0; p.str1[j]!='\0'; j++)
							t++;
					this->size = s+t;

				//str1 = new char[size];
				for(int i=0; i<size; i++){
					if(s==t){
						this->str1[i] == p.str1[i];
						return 1;
					}
				}
		} // should return true if both strings are same
	//int String :: stoi(){

	//}// function for converting a string to integer.
	String :: ~String(){
		delete[] str1;
		}// destructor..


