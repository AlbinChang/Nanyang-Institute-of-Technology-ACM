#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (true)
	{
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << distance << endl;
		if (--N == 0)
			break;
	}
}