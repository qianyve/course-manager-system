#include "CourseManager.h"

int CourseManager::find_num(int id)
{
	for (int i=0;i<courselist.size();i++)
		if (courselist[i].get_id()==id) return i;
}
int CourseManager::find_num(const string & name)
{

	for (int i=0;i<courselist.size();i++)
		if (courselist[i].get_name()==name) return i;
}

void CourseManager::remove_course(const string & name)
{
	int n=find_num(name);
	courselist.erase(courselist.begin()+n);
}
void CourseManager::remove_course(int id)
{
	int n=find_num(n);
	courselist.erase(courselist.begin()+n);
}

void CourseManager::print_all_course()
{
	for (auto x:courselist) cout<<x;
}
void CourseManager::print_course(const string & name)
{
	for (auto i=courselist.begin();i!=courselist.end();i++)
		if (i->get_name()==name) cout<<*i;
}
void CourseManager::print_course(int id)
{
	for (auto i=courselist.begin();i!=courselist.end();i++)
		if (i->get_id()==id) cout<<*i;
}
void CourseManager::print_longest_name_course()
{
	int count=0;
	int len_max=0;
	int longest_name_s_id[100];

	for (auto i=courselist.begin();i!=courselist.end();i++)
	{
		if (len_max==i->get_len_name())
		{
			count++;
			longest_name_s_id[count]=i->get_id();
		}
		if (len_max<i->get_len_name())
		{
			len_max=i->get_len_name();
			count=1;
			longest_name_s_id[count]=i->get_id();
		}
	}
		for (int i=1;i<=count;i++)
			cout<<courselist[find_num(longest_name_s_id[i])];
}
