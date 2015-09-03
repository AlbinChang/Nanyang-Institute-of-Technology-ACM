#include <iostream>
using namespace std;

int main()
{
	double PI = 3.1415926;
	double R;

	while (cin>>R)
	{
		double volume = (double)4 / 3 * PI*R*R*R;
		int volume_int = (int)(volume + 0.5);
		cout << volume_int << endl;
	}
}