#pragma once
#include<iostream>
#include<string>
using namespace std;

class Course
{
private:
	int id;
	string name;
	static int current_id;
public:
	Course(){
		id=current_id++;name="no_initial";
	};
	Course(const string & ini_name){
		id=current_id++;name=ini_name;
	};
	Course(const Course & course);//copy constructor

	int get_id(){return id;}//return course's id
	string get_name(){return name;}//return course's name
	int get_len_name(){return name.size();}//return the length of course's name

	void set_name(string & newname){name=newname;}//reset course's name

	//friend out 
	friend ostream & operator << (ostream & os , const Course & course);

	//frient read
	friend void read(istream & is , Course course);
};
