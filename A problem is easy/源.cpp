#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int n;
	int count;
	int j;
	int i;
	while (N--)
	{
		cin >> n;
		count = 0;
		for ( i = 1; i <= n / (i+2); i++)
		{
			j = (n - i) % (i + 1);
			if (j==0)
				count++;
		}
		cout << count << endl;
	}
}