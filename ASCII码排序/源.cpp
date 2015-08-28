#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	int n = 0;
	string s;
	while (cin>>n)
	{
		while (cin>>s)
		{
			for (int i = 0; i < s.length(); i++)
				for (int j = 0; j < s.length()-i-1; j++)
				{
					if (s[j] > s[j + 1])
					{
						int temp = s[j];
						s[j] = s[j + 1];
						s[j + 1] = temp;
					}
				}
			for (int num = 0; num < s.length(); num++)
				cout << s[num] << " ";
			cout << endl;
			if (--n == 0)
				break;
		}
	}
}