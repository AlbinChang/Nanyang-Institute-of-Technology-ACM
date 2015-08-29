#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (true)
	{
		string str;
		cin >> str;
		for (int i = str.length() - 1; i >= 0; i--)
		{
			char temp = str[i];
			switch (temp)
			{
			case '0':
				cout << 'O';
				break;
			case '1':
				cout << 'O';
				break;
			case '2':
				cout << 'T';
				break;
			case '3':
				cout << 'T';
				break;
			case '4':
				cout << 'F';
				break;
			case '5':
				cout << 'F';
				break;
			case '6':
				cout << 'S';
				break;
			case '7':
				cout << 'S';
				break;
			case '8':
				cout << 'E';
				break;
			case '9':
				cout << 'N';
				break;
			default:
				break;
			}
		}
		cout << endl;
		if (--T == 0)
			break;
	}
}