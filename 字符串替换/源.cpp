#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while (cin)
	{
		getline(cin, str);
		size_t found;
		while (true)
		{
			found = str.find("you");
			if (found == string::npos)
				break;
			str.replace(str.find("you"), 3, "we");
		}
		cout << str << endl;
		str.clear();
	}


}