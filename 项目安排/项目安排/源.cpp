#include <iostream>
#include <list>
#include <bitset>
using namespace std;

//�õ���ٷ������м�������ͨ������Ҳ��֪������������ɶ��������ȥ��Ҳ��֪��������
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

		long long m = 1 << n;  //����ж����ֿ��ܵ�ѡ��
		for (long long i = 0;i < m; i++)
		{
			//����ÿһ��ѡ����ȡ����ѡ�����Ŀ
			list<long long> selectedIndex;
			long long isInvalid = 1;		//����ÿһ��ѡ��Ҫ���м���Ƿ���Ч�������ʱ���ص�����Ч
			long long tempSum = 0;
			//��ÿһ����Ŀ���м�飬�Ƿ�ѡ��
			for (long long temp = 1, index =0; temp <= i; temp<<= 1,index++)
			{
				if ((temp&i) != 0)
				{
					//�Ƚ�����Ч�Լ��
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
					//�����Ч������
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