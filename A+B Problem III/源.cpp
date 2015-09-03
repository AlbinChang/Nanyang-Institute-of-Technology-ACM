#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		double A, B, C;
		cin >> A >> B >> C;
		if (A + B - C < 1e-6 && A+B-C>-1e-6)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
}