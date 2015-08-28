#include <iostream>
#include <string>
#include <cmath>
#include <climits>
using namespace std;


int main()
{
	int a[5] = { 0 };

	int min = INT_MAX;
	int max = -1;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}
	cout << min << " " << max << endl;

}