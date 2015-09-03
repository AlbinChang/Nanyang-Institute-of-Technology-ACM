#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;
	double edge;
	while (N--)
	{
		cin >> edge;
		double area = 3.1415926*edge*edge / 3;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << area << endl;
	}
}