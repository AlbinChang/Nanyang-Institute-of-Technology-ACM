#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int  n, k;
	int  sum, butts;
	while (N)
	{
		cin >> n >> k;
		sum = n;
		butts = n;
		while (butts>=k)
		{
			sum += butts / k;
			butts = butts%k + butts/k;
		}
		cout << sum << endl;
		N--;
	}

}