
#include <iostream>
using namespace std;

int main()
{
	char m[4] = { 0 };
	char n[4] = { 0 };
	while (cin >> m >> n)
	{
		if (m[0] == '0' && n[0]== '0')
			return 0;
		
		int carry = 0;

		for (int i = 2; i >= 0; i--)
		{
			int temp = m[i] -'0' + n[i] - '0';
			if (temp > 9)
			{
				carry++;
				if (i - 1 >= 0)
					m[i - 1]++;
			}
		}
		cout << carry << endl;
	}
}