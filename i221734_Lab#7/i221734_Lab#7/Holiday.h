/*
 * Holiday.h
 *
 *  Created on: Mar 8, 2023
 *      Author: muazam
 */

#ifndef HOLIDAY_H_
#define HOLIDAY_H_
#include <string>
using namespace std;

class Holiday {

private:
	string Name;
	int Day;
	string Month;
public:

	Holiday(string = NULL, int = 0, string = NULL );
	Holiday(string &n, int d, string &m);
	Holiday(Holiday & copy);

//-------------------------Getter setter-------------------
	int getDay() const;
	void setDay(int day);
	const string& getMonth() const;
	void setMonth(const string &month);
	const string& getName() const;
	void setName(const string &name);
//--------------------------------------------------------

	virtual ~Holiday();

};

bool inSameMonth (Holiday &a, Holiday &b);
double avgDate(Holiday arr[], int size);


#endif /* HOLIDAY_H_ */
