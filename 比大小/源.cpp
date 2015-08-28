#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	string b;

	while (cin>>a>>b)
	{
		if (a[0] == '0' && b[0] == '0')
		{
			return 0;
		}
		//正负比大小
		if (a[0] == '-' && b[0] != '-')
		{
			cout << "a<b" << endl;
			continue;
		}
		if (a[0] != '-' && b[0] == '-')
		{
			cout << "a>b" << endl;
		}

		//正数比大小
		if (a[0] != '-' && b[0] != '-')
		{
			if (a.length() > b.length())
			{
				cout << "a>b" << endl;
			}
			if (a.length() < b.length())
			{
				cout << "a<b" << endl;
			}
			if (a.length() == b.length())
			{
				for (int i = 0; i < (int)a.length(); i++)
				{
					if (a[i] > b[i])
					{
						cout << "a>b" << endl;
						break;
					}
					if (a[i] < b[i])
					{
						cout << "a<b" << endl;
						break;
					}
					if (a[i] == b[i] && i == (int)a.length() - 1)
					{
						cout << "a==b" << endl;
						break;
					}
				}
			}
		}
		//负数比大小
		if (a[0] == '-' && b[0] == '-')
		{
			if (a.length() > b.length())
			{
				cout << "a<b" << endl;
			}
			if (a.length() < b.length())
			{
				cout << "a>b" << endl;
			}
			if (a.length() == b.length())
			{
				for (int i = 0; i < (int)a.length(); i++)
				{
					if (a[i] > b[i])
					{
						cout << "a<b" << endl;
						break;
					}
					if (a[i] < b[i])
					{
						cout << "a>b" << endl;
						break;
					}
					if (a[i] == b[i] && i == (int)a.length() - 1)
					{
						cout << "a==b" << endl;
						break;
					}
				}
			}
		}

	}
}