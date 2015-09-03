#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring> 
using namespace std;
int a[2][1000001] = { 0 };
char c[11];
int main()
{
	int i, j, m, n;
	int k;
	int w = 0, p = 0;
	int n_one, n_two, n_five;
	//memset(a, 0, sizeof(a));
	for (i = 0; i<1000001; i++)
	{
		sprintf(c, "%d", i);
		n_one = n_two = n_five = 0;
		for (int index = 0; c[index] != 0; index++)
		{
			if (c[index] == '5')
			{
				n_five++;
				if (c[index + 1] != 0 &&
					c[index + 2] != 0 &&
					c[index + 1] == '2' &&
					c[index + 2] == '1')
				{
					p++;
					n_one++;
					n_two++;
					break;
				}
				continue;
			}
			if (c[index] == '2')
			{
				n_two++;
				continue;
			}
			if (c[index] == '1')
			{
				n_one++;
				continue;
			}
		}
		if (n_one > 0 && n_two > 0 && n_five > 0)
			w++;
		a[0][i] = w;
		a[1][i] = p;
	}
	k = 1;
	/*for (i=510;i<522;i++)
	printf("%d\n",a[i]);*/
	while (scanf("%d%d", &n, &m) != EOF && (m != 0 || n != 0))
	{
		printf("Case %d:%d %d\n", k, a[0][m] - a[0][n - 1], a[1][m] - a[1][n - 1]);
		k++;
	}
	return 0;
}