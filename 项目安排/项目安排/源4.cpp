#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

struct Project {
	int start;
	int end;
	int value;
};

bool isCovered(const Project& a, const Project& b)
{

	if (b.start > a.start && b.start < a.end)
		return true;
	if (b.end > a.start && b.end < a.end)
		return true;
	if (a.start > b.start && a.start < b.end)
		return true;
	if (a.end > b.start && a.end < b.end)
		return true;
	if (a.start == b.start && a.end == b.end)
		return true;
	return false;
}

bool operator <(const Project& first, const Project& second)
{
	return first.value > second.value;
}

int main()
{
	int n;
	while (cin >> n)
	{
		Project* projects = new Project[n + 1];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> projects[i].start >> projects[i].end >> projects[i].value;
		}

		sort(&projects[0], &projects[n]);

		

		cout << sum << endl;
		delete[] projects;
	}
}