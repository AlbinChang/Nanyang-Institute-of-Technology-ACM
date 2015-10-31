#include<iostream>

#include<string>
using namespace std;
int main()
{
	string a;
	int position, i;
	while (cin >> a)
	{
		position = a.find(".");
		if (position == -1)  //没小数点
			a = a + ".00";
		else              //有小数点
		{
			if (a[position + 1] == '\0')//
				a = a + "00";
			if (a[position + 2] == '\0')
				a = a + '0';
			if (a[position + 3] != '\0')
			{
				if (a[position + 3] >= '5'&&a[position] <= '9')
				{
					a[position + 2]++;
					a[position + 3] = '\0';
					if (a[position + 2] == '9' + 1)
					{
						a[position + 2] = '0';
						a[position + 1]++;
						if (a[position + 1] == '9' + 1)
						{
							a[position + 1] = '0';
							a[position - 1]++;
							for (i = position - 1;i>0;i--)
							{
								if (a[i] == '9' + 1)
								{
									a[i] = '0';
									if (i == 1 && a[i - 1] == '-')
									{
										a[0] = '1';
										a = "-" + a;
									}
									else
										a[i - 1]++;

								}
							}
							if (a[0] == '9' + 1)
							{
								a[0] = '0';
								a = "1" + a;
							}
						}
					}
				}
				else
					a[position + 3] = '\0';
			}
		}
		position = a.find(".");
		int count = 0;
		for (i = 0;i<position;i++)
		{
			if (a[i] == '0')
				count++;
		}
		if (a[0] != '-'&&count == position)
			a.replace(0, position, "0");
		else if (a[0] == '-'&&count == position - 1)
			a.replace(1, count, "0");
		else if (a[0] == '-')
		{
			while (a[1] == '0')
			{
				a.erase(1, 1);
			}
		}
		else if (a[0] != '-')
		{
			while (a[0] == '0')
			{
				a.erase(0, 1);
			}
		}
		position = a.find(".");
		if (a[0] != '-')
		{
			for (i = position - 1;i>2;)// -,456.4  123,456.4    -00000.9  -3.
			{
				a.insert(i - 2, ",");
				position = a.find(",");
				i = position - 1;
			}
		}
		else
		{
			for (i = position - 1;i>3;)// -1,456.4  123,456.4
			{
				a.insert(i - 2, ",");
				position = a.find(",");
				i = position - 1;
			}
		}
		if (a[0] == '-')
		{
			a.erase(0, 1);
			cout << "(" << a << ")" << endl;
		}
		else
			cout << a << endl;
	}
	return 0;
}