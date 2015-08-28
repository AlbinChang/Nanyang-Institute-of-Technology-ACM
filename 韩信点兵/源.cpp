#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while (cin>>a>>b>>c)
	{
		int population = 0;
		for (int i = 10; i <= 100; i++)
		{
			if (i % 3 == a && i % 5 == b && i % 7 == c)
			{
				population = i;
				break;
			}
		}
		if (population)
			cout << population << endl;
		else
			cout << "No answer" << endl;
	}
}