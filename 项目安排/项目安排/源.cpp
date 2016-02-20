#include <iostream>
#include <list>
#include <bitset>
using namespace std;

//用的穷举法，但有几个测试通不过，也不知道测试数据是啥，改来改去，也不知道错在哪
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
	if (a.start == b.start && a.end==b.end)
		return true;

	return false;
}
int main()
{
	long long n;
	while (cin>>n)
	{
		Project* projects = new Project[n];
		for (long long i = 0;i < n;i++)
		{
			cin >> projects[i].start >> projects[i].end >> projects[i].value;
		}

		long long sum = 0;	

		long long m = 1 << n;  //算出有多少种可能的选择
		for (long long i = 0;i < m; i++)
		{
			//对于每一种选择，提取出被选择的项目
			list<long long> selectedIndex;
			long long isInvalid = 1;		//对于每一种选择要进行检查是否有效，如果有时间重叠则无效
			long long tempSum = 0;
			//对每一个项目进行检查，是否被选择
			for (long long temp = 1, index =0; temp <= i; temp<<= 1,index++)
			{
				if ((temp&i) != 0)
				{
					//先进行有效性检查
					for (list<long long>::iterator it = selectedIndex.begin(); it != selectedIndex.end(); it++)
					{
						if (isCovered(projects[index], projects[*it]))
						{
							isInvalid = 0;
							break;
						}
					}
					if (isInvalid == 0)
						break;
					//如果有效，继续
					tempSum += projects[index].value;
					selectedIndex.push_back(index);
				}
			}
			if (isInvalid == 0)
			{
				continue;
			}
			else
			{
				if (sum < tempSum)
				{
					sum = tempSum;
				}
			}
		}

		delete[] projects;
		cout << sum << endl;
 	}
}