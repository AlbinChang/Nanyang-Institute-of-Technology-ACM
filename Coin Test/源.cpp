#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
	int n;
	string str;
	while (cin>>n>>str)
	{
		if (str.find('S') != string::npos)
		{
			cout << "Bingo" << endl;
			continue;
		}
		int num_U = count(str.begin(), str.end(), 'U');
		double possiblity = (double)num_U / n;

		if (fabs(possiblity - 0.5) > 0.003)
			cout << "Fail" << endl;
		else
		{
			for (int i = num_U; i >=2; i--)
			{
				if (num_U % i == 0 && n%i == 0)
				{
					num_U /= i;
					n /= i;
					break;
				}
			}
			cout << num_U << '/' << n << endl;
		}

	}
}