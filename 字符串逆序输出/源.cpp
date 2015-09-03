#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore();
	string str;
	while (N--)
	{
		getline(cin, str);
		for( int i = str.length() - 1; i >= 0; i-- )
		{
			if (str[i] >= '0' && str[i] <= '9')
				continue;
			if (str[i] == ' ')
				continue;
			cout << str[i];
		}
		cout << endl;
		str.clear();
	}
}