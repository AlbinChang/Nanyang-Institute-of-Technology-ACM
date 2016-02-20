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

bool MoveToNextSelection(bool* selectedIndex, int n)
{

	for (int i = n-1; i >=0; i--)
	{
		if (selectedIndex[i] == false)
		{
			selectedIndex[i] = true;
			return true;
		}
		else
		{
			if (i > 0)
			{
				selectedIndex[i] = false;
				continue;
			}
			if (i == 0)
			{
				return false;
			}
		}
	}
	return false;
}

int main()
{
	int n;
	while (cin>>n)
	{
		Project* projects = new Project[n];

		for (int i = 0; i < n; i++)
		{
			cin >> projects[i].start >> projects[i].end >> projects[i].value;
		}

		
		bool* selectedIndex = new bool[n]; //true表示选中该项目，false表示没选中该项目

		for (int i = 0; i < n; i++)
			selectedIndex[i] = false;

		int sum = 0;
		list<int> tempIndex;
		while (MoveToNextSelection(selectedIndex, n))//遍历每一种选择
		{			
			tempIndex.clear();
			int tempSum = 0;
			//先检查有效性
			int isInvalid = 1;			
			for (int i = 0; i < n; i++)
			{
				if (isInvalid == 0)
					break;
				if (selectedIndex[i] == true)//如果该项目被选中
				{
					for (list<int>::iterator it = tempIndex.begin(); it != tempIndex.end(); it++)
					{
						if (isCovered(projects[i], projects[*it]))
						{
							isInvalid = 0;
							
							for (int j = i +1; j <n ;j++)
							{
								selectedIndex[j] = true;
							}
							break;
						}							
					}
					if (isInvalid == 1)
					{
						tempIndex.push_back(i);
						tempSum += projects[i].value;
					}
				}				
			}
			
			if (isInvalid == 0)
				continue;

			if (sum < tempSum)
				sum = tempSum;
		}

		cout << sum << endl; 
		delete[] projects;
	}
}