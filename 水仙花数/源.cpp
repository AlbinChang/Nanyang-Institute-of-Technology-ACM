#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int a;
	while (cin>>a)
	{
		if (a == 0)
			break;
		char ch[4] = { 0 };
		sprintf(ch, "%d", a);
		int a0 = ch[0] - '0';
		int a1 = ch[1] - '0';
		int a2 = ch[2] - '0';
		int sum = a0*a0*a0 + a1*a1*a1 + a2*a2*a2;
		if (sum == a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
}