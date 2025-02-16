/*
 * course.h
 *
 *  Created on: Apr 5, 2023
 *      Author: mustan
 */

#ifndef COURSE_H_
#define COURSE_H_
#include "textbook.h"
#include "instructor.h"

class course {
private:
	textbook t;
	instructor i;
public:
	course();
	virtual ~course();
	course(const course &other);
};

#endif /* COURSE_H_ */
