#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int a[26];	
	while (T--)
	{
		fill_n(a, 26, 0);
		string str;
		int max = 0;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			a[str[i] - 'a']++;
			if (a[str[i] - 'a'] > max)
				max = a[str[i] - 'a'];
		}
		for (int i = 0; i < 26; i++)
		{
			if (a[i] == max)
			{
				cout <<(char) ('a' + i) << endl;
				break;
			}
		}
		str.clear();

	}
}