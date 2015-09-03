#include <iostream>
using namespace std;

int main()
{
	int dollar, penny;
	char dot;
	int sum_penny=0;
	int n = 12;
	while (n--)
	{
		cin >> dollar >> dot >> penny;
		sum_penny += (dollar * 100 + penny);
	}
	int average_penny = sum_penny / 12;
	if (sum_penny % 12 >= 6)
	{
		average_penny++;
	}
	cout << average_penny / 100 << dot << average_penny % 100 << endl;
}