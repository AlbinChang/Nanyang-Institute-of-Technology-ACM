#include <iostream>
using namespace std;

int main()
{
	int m[100]; //统计每个区域的任务
	int k[100];	//记录区域的顺序
	
	for (int i = 0;i < 100;i++)
	{
		m[i] = 0;
		k[i] = 0;
	}
	int a, b;
	int j=0;

	while (cin>>a>>b)
	{
		if (a == 0 && b == 0)
			break;
		m[a] += b;

		k[j++] = a;
		for (int temp = 0; temp < j-1; temp++)
		{
			if (k[temp] == a)
				k[--j] = 0;
		}
	}

	for (int temp = 0;temp < 100;temp++)
	{
		if (k[temp] == 0)
			break;
		else
			cout << k[temp] << " " << m[k[temp]] << endl;
	}
	
//system("pause");
}