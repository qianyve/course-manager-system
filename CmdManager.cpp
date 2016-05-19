#include"CmdManager.h"
#include"Course.h"

void CmdManager::init()
{
	//initialize courselist
	manager.add_course("Linux");
	manager.add_course("NodiJs");
	manager.add_course("C++");
	manager.add_course("Python");
	manager.add_course("Spark");
	manager.add_course("Hadoop");
	manager.add_course("Ruby");
	manager.add_course("Java");

	//initialize cmd_list
	cmdMap.insert(pair<Cmd,string>(CmdPrintHelp,"help info"));
	cmdMap.insert(pair<Cmd,string>(CmdPrintAllCourse,"help info"));
	cmdMap.insert(pair<Cmd,string>(CmdPrintCourseNum,"help info"));
	cmdMap.insert(pair<Cmd,string>(CmdPrintLongestName,"help info"));
	cmdMap.insert(pair<Cmd,string>(CmdRemoveLastCourse,"help info"));
	cmdMap.insert(pair<Cmd,string>(CmdExit,"help info"));
}

void CmdManager::print_all_help() const
{
	cout<<"Cmd list:\n"
		<<"0:Print Help Info\n"
		<<"1:Print All Course\n"
		<<"2:Print Course Num\n"
		<<"3:Print Longest Name\n"
		<<"4:Remove Last Course\n"
		<<"5:Exit\n";
}

bool CmdManager::handle_cmd(const Cmd cmd)
{
	//search if the cmd is right
	auto iter=cmdMap.find(cmd);

	//if the cmd is wrong , print "NOT FOUND" and exit
	if (iter==cmdMap.end())
	{
		cout<<"NOT FOUND"<<endl;
		return true;
	}
	switch(cmd)
	{
	case CmdPrintHelp:print_all_help();break;
	case CmdPrintAllCourse:manager.print_all_course();break;
	case CmdPrintCourseNum:cout<<manager.get_course_num();break;
	case CmdPrintLongestName:manager.print_longest_name_course();break;
	case CmdRemoveLastCourse:manager.remove_last();break;
	case CmdExit:return false;
	default:break;
	}
	return true;
}
