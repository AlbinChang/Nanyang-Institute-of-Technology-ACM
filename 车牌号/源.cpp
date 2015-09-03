#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	set<string> numbers;
	string str;
	while (N--)
	{
		int M;
		cin >> M;
		while (M--)
		{
			cin >> str;
			numbers.insert(str);
			str.clear();
		}
		cout << *numbers.begin() << endl;
		numbers.clear();
	}
}