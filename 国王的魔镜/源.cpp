#include <iostream>
#include <string>
using namespace std;

int  min_str(string str)
{
	if (str.length()%2 == 1)
		return str.length();
	for (int i = str.length() / 2 - 1, j = str.length() / 2; i >= 0; i--, j++)
	{
		if (str[i] == str[j])
			continue;
		else
			return str.length();
	}
	return min_str( str.substr(0, str.length() / 2));
}
int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		string str;
		cin >> str;
		cout << min_str(str) << endl;
		str.clear();
	}
}