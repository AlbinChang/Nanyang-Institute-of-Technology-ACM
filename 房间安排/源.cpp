#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int time_space[256];
	int A, B, C;
	int N;
	while (T--)
	{		
		cin >> N;		
		fill_n(time_space, 256, 0);		
		int MAX = 0;
		while (N--)
		{
			cin >> A >> B >> C;
			for (int i = B; i < B + C; i++)
			{
				time_space[i] += A;
				if (time_space[i] > MAX)
					MAX = time_space[i];
			}
		}
		cout << MAX << endl;
	}
}