#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	string str;
	int n = 0;
	while (cin>>str)
	{
		n++;
		if (str == "I")
			printf("Case %d: %d\n", n, 1);
		else if (str == "II")
			printf("Case %d: %d\n", n, 2);
		else if (str == "III")
			printf("Case %d: %d\n", n, 3);
		else if (str == "IV")
			printf("Case %d: %d\n", n, 4);
		else if (str == "V")
			printf("Case %d: %d\n", n, 5);
		else if (str == "VI")
			printf("Case %d: %d\n", n, 6);
		else if (str == "VII")
			printf("Case %d: %d\n", n, 7);
		else if (str == "VIII")
			printf("Case %d: %d\n", n, 8);
		else if (str == "IX")
			printf("Case %d: %d\n", n, 9);
		else if (str == "X")
			printf("Case %d: %d\n", n, 10);
		else if (str == "XI")
			printf("Case %d: %d\n", n, 11);
		else if (str == "XII")
			printf("Case %d: %d\n", n, 12);

		str.clear();
	}
}