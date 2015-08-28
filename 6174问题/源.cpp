#include <iostream>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

int ascending(char ch[4])
{
	int ascend = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4 - i - 1; j++)
		{
			if (ch[j] > ch[j + 1])
			{
				int temp = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = temp;
			}
		}

	for (int i = 3; i >= 0; i--)
		ascend += (int)pow(10,3-i) * (ch[i] - '0');
	return ascend;
}
int descending(char ch[4])
{
	int descend = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4 - i - 1; j++)
		{
			if (ch[j] < ch[j + 1])
			{
				int temp = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = temp;
			}
		}

	for (int i = 3; i >= 0; i--)
		descend += (int)pow(10,3-i) * (ch[i] - '0');
	return descend;
}

int self(char ch[4])
{
	int self = 0;
	for (int i = 3; i >= 0; i--)
		self += (int)pow(10,3-i) * (ch[i] - '0');
	return self;
}
int main()
{
	int N = 0;

	while (cin >> N)
	{

		while (cin)
		{
			char ch[4] = { 0 };
			int previous = 0;
			int count = 0;
			int ascend = 0;
			int descend = 0;
			for (int i = 0; i < 4; i++)
				cin >> ch[i];
			while (true)
			{
				int myself = self(ch);
				ascend = ascending(ch);
				descend = descending(ch);
				int result = descend - ascend;
				count++;
				if (myself == result)
				{
					cout << count << endl;
					break;
				}

				for (int i = 0; i < 4; i++)
				{
					ch[3-i] = (result % (int)pow(10,i+1) - result % (int)pow(10,i))/(int)pow(10,i)+'0';
				}
			}

			if (--N == 0)
				break;
		}
	}
}