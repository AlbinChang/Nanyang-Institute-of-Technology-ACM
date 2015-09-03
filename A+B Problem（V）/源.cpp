#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	string str1, str2;
	while (cin>>str1>>str2)
	{
		if (str1 == "0" && str2 == "0")
			return 0;
		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());
		int a = atoi(str1.c_str());
		int b = atoi(str2.c_str());
		/*sscanf(str1.c_str(), "%d", &a);
		sscanf(str2.c_str(), "%d", &b);*/
		cout << a + b << endl;
	}
}