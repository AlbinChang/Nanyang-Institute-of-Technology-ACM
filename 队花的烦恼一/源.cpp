#include <iostream>
using namespace std;


void print_binary(const int& n)
{	
	if (n == 0)
	{
		cout << 0;
		return;
	}		
	if (n == 1)
	{
		cout << 1;
		return;
	}
	if (n > 0)
	{
		print_binary( n >> 1);
		cout << n % 2;
	}
	if (n < 0)
	{
		cout << '-';
		print_binary(-n);
		
	}
	
	
}
int main()
{
	int n;
	while (cin >> n)
	{
		print_binary(n);
		cout << endl;
	}
}