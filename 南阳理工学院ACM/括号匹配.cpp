#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0;
	string s;
	while (cin >> N)
	{
		cin.ignore();
		while (getline(cin, s))
		{
			
			if (s.length()%2 != 0)
			{
				cout << "No" << endl;
				continue;
			}

			for (int i = 0; i < ((int)s.length()-1);)
			{
				if (s[i] == '(' && s[i + 1] == ')')
				{
					s.erase(i, 2);
					if (i != 0)
						i --;
					continue;
				}
				if (s[i] == '[' && s[i + 1] == ']')
				{
					s.erase(i, 2);
					if (i != 0)
						i --;
					continue;
				}
				i++;
			}
			if (s.length() == 0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
			if (--N == 0)
				break;
		}
	}
}