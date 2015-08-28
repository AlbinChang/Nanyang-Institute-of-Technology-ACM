#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	while (true)
	{
		char num[10] = { 0 };
		cin >> num;
		bool isfirst = true;
		for (int i = 1; num[i] != 0; i++)
		{
			if (num[i] != '0')
			{
				isfirst = false;
				cout << num[i];
			}
			else
			{
				if (!isfirst)
					cout << num[i];
				else{
					if (num[i + 1] == 0)
						cout << 0;
				}
			}
		}
		cout << endl;
		if (--N == 0)
			break;
	}
}