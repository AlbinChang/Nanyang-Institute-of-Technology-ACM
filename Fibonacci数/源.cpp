#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int n = 0;
	while (cin>>N)
	{
		while (cin>>n)
		{
			int a = 1, b = 1;
			if (n == 1 || n==2)
			{
				cout << "1" << endl;
			}
			else
			{
				int c = a + b;
				n = n - 2;
				while (n!=0)
				{
						a = b;
						b = c;
						c = a + b;
						n--;
				}
				cout << b << endl;
			}
			if (--N == 0)
				break;
		}
	}
}