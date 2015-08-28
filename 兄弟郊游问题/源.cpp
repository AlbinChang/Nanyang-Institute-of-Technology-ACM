#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (true)
	{
		double M, X, Y, Z;
		cin >> M >> X >> Y >> Z;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << M*X / (Y - X)*Z << endl;
		if (--N == 0)
			break;
	}
}