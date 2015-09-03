#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		int n;
		cin >> n;
		if (n <= 10)
			cout << 1 << endl;
		else
		{
			n = n - 10;
			cout << (int)ceil((double)n / 5)+1<<endl;
		}
	}
}