#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int number = 0;
	while (cin>>n)
	{
		while (cin>>number)
		{
			//输出奇数
			for (int i = 1; i <= number; i++)
			{
				if (i % 2 != 0)
					cout << i << " ";
			}
			cout << endl;

			//输出偶数
			for (int i = 2; i <= number; i++)
			{
				if (i % 2 == 0)
					cout << i << " ";
			}
			cout << endl;
			if (--n == 0)
				break;
		}
	}
}