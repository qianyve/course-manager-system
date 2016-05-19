#include"Course.h"

int Course::current_id = 1;

//copy constructor
Course::Course(const Course & course)
{
	id=course.id;
	name=course.name;
}

//friend out
ostream & operator << (ostream & os , const Course & course)
{
	os<<"Course "<<course.id<<":   "<<course.name<<endl;
	return os;
}
