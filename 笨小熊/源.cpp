#include <iostream>
#include <string>
using namespace std;
bool isprime(int number)
{
	if (number < 2)
		return false;
	for (int i = 2; i <= number / i; i++)
		if (number%i == 0)
			return false;
	return true;
}
int main()
{
	int N;
	cin >> N;
	while (true)
	{
		string str;
		cin >> str;
		int maxn = 1;
		int minn = 10000;
		while ( !str.empty() )
		{
			char temp = str[0];
			int  count = 1;
			str.erase(str.begin());
			size_t found = str.find(temp);
			while (found != string::npos)
			{
				count++;
				str.erase(found,1);
				found = str.find(temp);
			}
			if (count > maxn)
				maxn = count;
			if (count < minn)
				minn = count;
		}
		int difference = maxn - minn;
		if (isprime(difference))
		{
			cout << "Lucky Word" << endl;
			cout << difference << endl;
		}
		else
		{
			cout << "No Answer" << endl;
			cout << 0 << endl;
		}
		str.clear();
		if (--N == 0)
			break;
	}
}