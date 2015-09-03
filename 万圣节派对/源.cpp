#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


bool three_more(char* str)
{
	
	for (int i = 1; i < 6; i++)
	{
		if (str[i - 1] > '6' || str[i]>'6')
			return true;
		if (str[i] - str[i - 1] >4 || str[i - 1] - str[i] > 4)
			return true;
		if (i >= 2)
		{
			if (str[i] == str[i - 1] && str[i] == str[i - 2])
				return true;
		}
	}
	return false;
}
int main()
{
	int n;
	int a, b;
	char str[10];	
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++)
		{			
			sprintf(str, "%06d", i);
			if (three_more(str))
				continue;			
			printf("%06d\n", i);
		}
		printf("\n");
	}
}