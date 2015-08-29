#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int L, D, R;
	while (N--)
	{
		cin >> L >> D >> R;
		if (D >= 2 * R)
		{
			cout << "impossible" << endl;
		}
		else
		{
			double temp =  sqrt( R*R*4-D*D);
			double count = L / temp;
			int num = ceil(count);

			if (temp - 1.0 <  0.000001)
				cout << "impossible" << endl;
			else
				cout << num << endl;
		}
	}
}