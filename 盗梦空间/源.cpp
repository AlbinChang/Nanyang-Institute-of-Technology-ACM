#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (true)
	{
		int M;
		cin >> M;
		cin.ignore(100, '\n');
		string str;
		int deep = 0;
		int sum_time = 0;
		while (true)
		{			
			getline(cin, str);
			if (str.compare("IN") == 0)
			{
				deep++;
			}
			else if (str.compare("OUT") == 0)
			{
				deep--;
			}
			else
			{
				int temp=0;
				
				sscanf(str.c_str(), "%*s %d", &temp);
				sum_time += temp*60 / (int)pow(20, deep);
			}
			str.clear();

			if (--M == 0)
				break;
		}
		cout << sum_time << endl;

		if (--T == 0)
			break;
	}
}