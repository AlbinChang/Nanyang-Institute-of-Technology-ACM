#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		int* matirx = new int[n*n];
		int i = 0;//行
		int j = n - 1;//列
		int count = 1;//计数
		int circle = 0;//圈数
		for (; count <= n*n; count++)
		{
			matirx[i*n + j] = count;

			if (i < n - 1 -circle && j == n - 1 -circle)
				i++;
			else if (i == n - 1 -circle && j == n - 1 -circle) //右下角位置
				j--;
			else if (i == n - 1 -circle && j > 0 + circle)
				j--;
			else if (i == n - 1 -circle && j == 0 + circle)    //左下角位置
				i--;
			else if (i > 0 + circle && j == 0 + circle)
				i--;
			else if (i == 0 +circle && j == 0 + circle )	//左上角位置
				j++;
			else if (i == 0 + circle && j < n - 2 -circle)
				j++;
			else if (i == 0 + circle && j == n - 2 - circle ) //走完一圈
			{
				circle++;
				i = circle;
				j = n - 1 - circle;
			}
		}

		for (int i = 0; i < n*n; i++)
		{
			cout << matirx[i] << " ";
			if ((i + 1) % n == 0)
				cout << endl;
		}

	}
}