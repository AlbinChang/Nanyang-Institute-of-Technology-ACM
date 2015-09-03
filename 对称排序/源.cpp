#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <set>
using namespace std;

struct classcomp {
	bool operator ()(const string& first,const string& second)const
	{
		if (first.length() < second.length())
			return true;
		/*if (first.length() > second.length())
			return false;
		if (first.compare(second) == -1)
			return true;*/
		return false;
	}
};
 

typedef multiset<string,classcomp>::iterator Ptr;
//typedef vector<string>::iterator Ptr;

void print_strings(Ptr begin,Ptr end)
{
	if (begin == end)
		return;
	Ptr temp = begin;
	temp++;
	if (temp == end)
	{
		cout << *begin << endl;
		return;
	}
	


	/*if (begin->length() == temp->length())
	{
		if (begin->compare(*temp) == 1)
		{
			cout << *temp << endl;

			temp++;
			print_strings(temp, end);

			cout << *begin << endl;
			return;
		}
	}*/
	cout << *begin<< endl;
	
	temp++;
	print_strings(temp,end);

	cout << *(++begin) << endl;
}
int main()
{
	int count_set = 0;
	int n;
	string str;
	multiset<string,classcomp> set_string;
	//vector<string> set_string;
	while (cin>>n)
	{
		if (n == 0)
			return 0;
		count_set++;
		while (n--)
		{
			cin >> str;
			set_string.insert(str);
			str.clear();
		}
		printf("SET %d\n", count_set);
		print_strings(set_string.begin(), set_string.end());
		set_string.clear();
	}
	return 0;
}