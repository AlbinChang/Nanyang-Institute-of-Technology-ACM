#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n, k;
	while (cin>>n>>k)
	{
		if (n == 0 && k == 0)
			return 0;
		int i = 1;
		bool flag = true;
		for (i=1; i <= n / 2; i++)
		{
			int j = n - i;
			if (i*j == k)
			{
				cout << "YES" << endl;
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "NO" << endl;
	}
}