#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> array(3);
	while (cin>>array[0]>>array[1]>>array[2])
	{
		sort(array.begin(), array.end());
		for (int i = 0; i < 3; i++)
			cout << array[i] << " ";
		cout << endl;
	}
}