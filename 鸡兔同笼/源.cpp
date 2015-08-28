#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0;
	while (cin >> N)
	{
		int total_number = 0;
		int legs = 0;
		while (cin >> total_number >> legs)
		{
			int x = 0;//鸡的数量
			int y = 0;//兔子的数量
			//那么 2*x + 4*y = legs  => x + 2*y = legs/2 => total_number +y = legs/2 => y = legs/2 - total_number
			//       x + y = total_number
			y = legs / 2 - total_number;
			x = total_number - y;
			if (x >= 0 && y >= 0 && x + y == total_number && 2 * x + 4 * y == legs)
			{
				cout << x << " " << y << endl;
			}
			else
			{
				cout << "No answer" << endl;
			}

			if (--N == 0)
				break;
		}
	}
}