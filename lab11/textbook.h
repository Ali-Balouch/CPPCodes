/*
 * textbook.h
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#ifndef TEXTBOOK_H_
#define TEXTBOOK_H_
#include<iostream>
using namespace std;
#include<cstring>

class textbook {
private:
	string title;
	string author;
	int book_id;
public:
	textbook(string="",string="", int=0 );
	void setid(int);
	void settitle(string);
	void setauthor(string);
	void print();
	virtual ~textbook();
};

#endif /* TEXTBOOK_H_ */
