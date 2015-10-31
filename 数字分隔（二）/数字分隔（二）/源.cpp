#include <iostream>
using namespace std;

int main()
{
	char str[200];
	char result[200];
	char first[200];	//������������
	char second[200]; //����С������
	while (cin>>str)
	{
		int cursor = 0;
		int isNegative = 0;
		int firstIndex = 0;
		int secondIndex = 0;
		//���ж�������
		if (str[cursor] == '-')
		{
			isNegative = 1;
			cursor++;
		}
		
		//��ȥ��ǰ׺0
		while (str[cursor] == '0')
		{
			cursor++;
		}

		//��ȡ��������
		while (str[cursor] != '.'  && str[cursor] != '\0')
		{
			first[firstIndex++] = str[cursor++];
		}

		if (firstIndex == 0)
		{
			first[firstIndex++] = '0';
		}
		//����С����
		if (str[cursor] == '.')
			cursor++;

		//��ȡС������
		while (str[cursor] != '\0')
		{
			second[secondIndex++] = str[cursor++];
		}

		//�ϲ�������С������
		int resultIndex = 0;
		if (isNegative == 1)
		{
			result[resultIndex++] = '(';
		}		
		
		for (int i = 0; i < firstIndex; i++)
		{
			if ((firstIndex-i) % 3 == 0 && (firstIndex-i)>2 && i>0)
			{
				result[resultIndex++] = ',';
			}
			result[resultIndex++] = first[i];
		}
		if (firstIndex == 0)
			result[resultIndex++] = '0';

		result[resultIndex++] = '.';

		if (secondIndex == 0)
		{
			result[resultIndex++] = '0';
			result[resultIndex++] = '0';
		}
		else if (secondIndex == 1)
		{
			result[resultIndex++] = second[0];
			result[resultIndex++] = '0';
		}
		else if (secondIndex == 2)
		{
			result[resultIndex++] = second[0];
			result[resultIndex++] = second[1];
		}
		else
		{
			result[resultIndex++] = second[0];
			result[resultIndex++] = second[1];
			if (second[2] >= '5')
			{
				result[resultIndex - 1]++;
			}
		}

		if (isNegative == 1)
			result[resultIndex++] = ')';
		
		result[resultIndex] = '\0';
		
	
	
		if(   result[resultIndex-1] != ('9'+1) && result[resultIndex-2] != ('9'+1)  )
			cout << result << endl;
		else
		{
			int overFlow = 0;
			second[1] = '0';
			second[0]++;
			if (second[0] > '9')
			{
				second[0] = '0';
				overFlow = 1;
			}
			secondIndex = 2;
			second[secondIndex] = '\0';

			if (overFlow == 1)
			{
				overFlow = 0;
				first[firstIndex - 1] ++;
				for (int i = firstIndex - 1;i >= 0;i--)
				{
					if (first[i] > '9')
					{
						first[i] = '0';
						if (i == 0)
						{							
							overFlow = 1;
						}
						else
						{
							first[i - 1]++;
						}
					}
				}
			}
			if (overFlow == 1)
			{
				//�ٴ����ºϲ�������С������
				int resultIndex = 0;
				if (isNegative == 1)
				{
					result[resultIndex++] = '(';
				}
				result[resultIndex++] = '1';

				for (int i = 0; i < firstIndex; i++)
				{
					if ((firstIndex - i) % 3 == 0 && (firstIndex - i)>2)
					{
						result[resultIndex++] = ',';
					}
					result[resultIndex++] = first[i];
				}
				if (firstIndex == 0)
					result[resultIndex++] = '0';

				result[resultIndex++] = '.';

				if (secondIndex == 0)
				{
					result[resultIndex++] = '0';
					result[resultIndex++] = '0';
				}
				else if (secondIndex == 1)
				{
					result[resultIndex++] = second[0];
					result[resultIndex++] = '0';
				}
				else if (secondIndex == 2)
				{
					result[resultIndex++] = second[0];
					result[resultIndex++] = second[1];
				}
				else
				{
					result[resultIndex++] = second[0];
					result[resultIndex++] = second[1];
					if (second[2] >= '5')
					{
						result[resultIndex - 1]++;
					}
				}

				if (isNegative == 1)
					result[resultIndex++] = ')';

				result[resultIndex] = '\0';
			}
			else
			{
				//�ٴ����ºϲ�������С������
				int resultIndex = 0;
				if (isNegative == 1)
				{
					result[resultIndex++] = '(';
				}
				

				for (int i = 0; i < firstIndex; i++)
				{
					if ((firstIndex - i) % 3 == 0 && (firstIndex - i)>2 && i>0)
					{
						result[resultIndex++] = ',';
					}
					result[resultIndex++] = first[i];
				}
				if (firstIndex == 0)
					result[resultIndex++] = '0';

				result[resultIndex++] = '.';

				if (secondIndex == 0)
				{
					result[resultIndex++] = '0';
					result[resultIndex++] = '0';
				}
				else if (secondIndex == 1)
				{
					result[resultIndex++] = second[0];
					result[resultIndex++] = '0';
				}
				else if (secondIndex == 2)
				{
					result[resultIndex++] = second[0];
					result[resultIndex++] = second[1];
				}
				else
				{
					result[resultIndex++] = second[0];
					result[resultIndex++] = second[1];
					if (second[2] >= '5')
					{
						result[resultIndex - 1]++;
					}
				}

				if (isNegative == 1)
					result[resultIndex++] = ')';

				result[resultIndex] = '\0';
			}

			cout << result << endl;
		}
	}
}