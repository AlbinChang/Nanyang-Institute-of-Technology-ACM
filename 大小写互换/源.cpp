#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string str;
	while (N--)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'a')
				cout << (char)('A' + str[i] - 'a');
			else
				cout << (char)('a' + str[i] - 'A');
		}
		cout << endl;
		str.clear();
	}
}