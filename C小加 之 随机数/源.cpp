#include <iostream>
#include <set>
using namespace std;

int main()
{
	int T;
	cin >> T;
	set<int> s;
	while (T--)
	{
		int n;
		cin >> n;
		int temp;
		while (n--)
		{
			cin >> temp;
			s.insert(temp);
		}
		cout << s.size() << endl;
		set<int>::iterator it;
		for (it = s.begin(); it != s.end(); it++)
			cout << *it << " ";
		cout << endl;
		s.clear();
	}
}