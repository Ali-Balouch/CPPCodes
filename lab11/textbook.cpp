/*
 * textbook.cpp
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#include "textbook.h"
#include<iostream>
using namespace std;
#include<cstring>

textbook::textbook(string title,string author, int id ) {
	// TODO Auto-generated constructor stub

	this->title=title;
	this->author=author;
	this->book_id=id;


}
void textbook::settitle(string tit){
	this->title=tit;
}
void textbook::setauthor(string author){
		this->author=author;

}
void textbook::setid(int id){
	this->book_id=id;
}

void textbook::print(){
	cout<<"Title : "<<title<<endl;
	cout<<"Author : "<<author<<endl;
	cout<<"Book id :"<<book_id<<endl;
}
textbook::~textbook() {
	// TODO Auto-generated destructor stub
}



