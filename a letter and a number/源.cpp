#include <iostream>
using namespace std;

int f(char ch)
{
	if (ch >= 'A' && ch <'a')
		return ch - 'A' + 1;
	return -(ch - 'a' + 1);
}
int main()
{
	int T;
	cin >> T;
	char x;
	int y;
	while (T--)
	{
		cin >> x >> y;
		cout << y + f(x) << endl;
	}
}