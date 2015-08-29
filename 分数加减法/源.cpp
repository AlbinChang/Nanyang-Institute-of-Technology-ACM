#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while (cin>>str)
	{
		int a = str[0] - '0';
		int b = str[2] - '0';
		char ch = str[3];
		int c = str[4] - '0';
		int d = str[6] - '0';

		//先通分
		int denominator = b*d;//分母
		int member;//分子
		char symbol = '+';
		if (ch == '+')
		{
			member = a*d + b*c;
		}
		else
		{
			member = a*d - b*c;
		}
		//约分
		for (int i = denominator; i >=2 ; i--)
		{
			if ( member%i == 0 && denominator%i == 0)
			{
				member = member / i;
				denominator = denominator / i;
				break;
			}
		}
		if (member == 0)
		{
			cout << 0 << endl;
		}
		else if (denominator == 1)
		{
			cout << member << endl;
		}
		else
			cout << member << "/" << denominator << endl;

		str.clear();
	}
}