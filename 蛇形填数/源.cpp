#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		int* matirx = new int[n*n];
		int i = 0;//��
		int j = n - 1;//��
		int count = 1;//����
		int circle = 0;//Ȧ��
		for (; count <= n*n; count++)
		{
			matirx[i*n + j] = count;

			if (i < n - 1 -circle && j == n - 1 -circle)
				i++;
			else if (i == n - 1 -circle && j == n - 1 -circle) //���½�λ��
				j--;
			else if (i == n - 1 -circle && j > 0 + circle)
				j--;
			else if (i == n - 1 -circle && j == 0 + circle)    //���½�λ��
				i--;
			else if (i > 0 + circle && j == 0 + circle)
				i--;
			else if (i == 0 +circle && j == 0 + circle )	//���Ͻ�λ��
				j++;
			else if (i == 0 + circle && j < n - 2 -circle)
				j++;
			else if (i == 0 + circle && j == n - 2 - circle ) //����һȦ
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