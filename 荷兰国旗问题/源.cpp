#include <iostream>
#include <string>
#include <set>
using namespace std;

struct RWB{
	char color;
	
	RWB& operator = (const char& ch)
	{
		color = ch;
	}
	RWB(const char& ch)
	{
		color = ch;
	}
};

bool operator < (const RWB& first,const RWB& other)
{
	if (first.color == other.color)
		return false;
	if (first.color == 'R')
		return true;
	if (first.color == 'W' && other.color == 'R')
		return false;
	if (first.color == 'W' && other.color == 'B')
		return true;
	if (first.color == 'B')
		return false;
	return false;
}
ostream& operator << (ostream& cout, const RWB& rwb)
{
	return cout << rwb.color;
}

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		string str;
		cin >> str;
		multiset<RWB> rwb(str.begin(), str.end());
		multiset<RWB>::iterator it;
		for (it = rwb.begin(); it != rwb.end(); it++)
			cout << *it ;
		cout << endl;
		str.clear();
	}
}