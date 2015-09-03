#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		int M;
		cin >> M;//ÐÐÊý

		for (int i = 1; i <= M; i++)
		{
			for (int j = i; j <= 9; j++)
			{
				cout << i << '*' << j << '=' << i*j << ' ';
			}
			cout << endl;
		}

		cout << endl;
	}
}