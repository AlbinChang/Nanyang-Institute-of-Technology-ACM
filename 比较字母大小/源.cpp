#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	char a, b;
	while (N--)
	{
		cin >> a >> b;
		if (a == b)
			cout << a << '=' << b << endl;;
		if (a > b)
			cout << a << '<' << b << endl;
		if (a < b)
			cout << a << '>' << b << endl;
	}
}