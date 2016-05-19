#include<iostream>
#include<vector>
#include<string>
#include"Course.h"
#include"CourseManager.h"
#include"Cmd.h"
#include"CmdManager.h"

using namespace std;

int main()
{
	CmdManager cmdManager;
	cmdManager.init();

	//print helo info
	cmdManager.print_all_help();
	cout<<"New Comment: ";

	//handle input cmd
	int cmd;
	while(cin>>cmd){
		if (cin.good()){
			bool exitCode=cmdManager.handle_cmd((Cmd)cmd);
			if (!exitCode) return 0;
		}
		cout<<"---------------------------------------------"<<endl;
		cout<<"New Commend: ";
		cin.clear();
		cin.ignore();
	}
	return 0;
}
