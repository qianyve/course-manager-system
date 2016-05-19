#pragma once
#include<iostream>
#include<vector>
#include"Course.h"

using std::vector;

class CourseManager
{
private:
	vector<Course> courselist;
	int find_num(int id);
	int find_num(const string & name);
public:
	CourseManager()=default;
	CourseManager(const vector<Course> & courseVect){courselist=courseVect;};

	//return num of course
	int get_course_num(){return courselist.size();};
	
	//add course       use vectorname.pushback(element)
	void add_course(const Course & course){courselist.push_back(course);};
	void add_course(const string & course_name){Course s(course_name);courselist.push_back(s);};

	//delete last course
	void remove_last(){courselist.pop_back();};
	void remove_course(const string & name);
	void remove_course(int id);

	//print all course
	void print_all_course();

	//print course you want
	void print_course(const string & name);
	void print_course(int id);
	void print_longest_name_course();
};
