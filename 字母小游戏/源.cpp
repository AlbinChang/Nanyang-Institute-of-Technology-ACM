#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		char str[256];
		cin >> str;
		int sum = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				sum++;
		}
		if (sum % 26 != 0)
			cout << (char)(sum % 26 + 'a' - 1) << endl;
		else
			cout << 'z' << endl;
	}
}