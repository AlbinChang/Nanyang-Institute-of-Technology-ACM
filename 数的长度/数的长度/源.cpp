#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,N;
	while (cin>>n)
	{
		while ( n-- )
		{
			cin >> N;
			double sum = 1.0;
			for(int i = 2; i <= N; i++)
			{
				sum += log10((double)i);
			}
			cout << (int)sum << endl;
		}
	}
}