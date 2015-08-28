#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	while (true)
	{
		int a;
		cin >> a;
		if (a >= 90)
			cout << 'A';
		else if (a >= 80)
			cout << 'B';
		else if (a >= 70)
			cout << 'C';
		else if (a >= 60)
			cout << 'D';
		else
			cout << 'E';
		cout << endl;
		if (--N == 0)
			break;
	}
}