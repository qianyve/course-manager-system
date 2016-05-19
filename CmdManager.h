#pragma once
#include"CourseManager.h"
#include"Cmd.h"

#include<map>

class CmdManager
{
private:
	CourseManager manager;
	map<Cmd, string> cmdMap;	
public:
	CmdManager()=default;
	
	//initial
	void init();

	//print help info
	void print_all_help() const;

	//handle cmd
	bool handle_cmd(const Cmd cmd);

	//return CourseManager
};
