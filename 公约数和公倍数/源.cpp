#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N = 0;
	while (cin>>N)
	{
		int a, b;
		while (cin>>a>>b)
		{
			int x;//���Լ��
			int y;//��С������

			if (a == b)
			{
				x = a;
				y = a;
				cout << x << " " << y << endl;
			}
			else
			{
				//�����Լ��
				if (a > b)
				{
					for (x = b; x >= 1; x--)
					{
						if (a%x == 0 && b%x == 0)
						{
							break;
						}
					}
				}
				else
				{
					for (x = a; x >= 1; x--)
					{
						if (a%x == 0 && b%x == 0)
						{
							break;
						}
					}
				}
				//����С������
				y = (a / x)*b;
				cout << x << " " << y << endl;
			}
			if (--N == 0)
				break;
		}
	}
}