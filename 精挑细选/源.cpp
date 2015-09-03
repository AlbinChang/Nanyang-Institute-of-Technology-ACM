#include <iostream>
#include <set>
using namespace std;

struct Steel{
	int length;
	int diameter;
	int ID;
	Steel(int& length_in, int& diameter_in, int& ID_in)
	{
		length = length_in;
		diameter = diameter_in;
		ID = ID_in;
	}

	bool operator < (const Steel& other)const
	{
		if (length < other.length)
			return true;
		if (length > other.length)
			return false;
		if (diameter < other.diameter)
			return false;
		if (diameter > other.diameter)
			return true;
		if (ID < other.ID)
			return true;
		if (ID > other.ID)
			return false;
		return false;
	}
};

int main()
{
	int N;
	cin >> N;
	set<Steel> steel;
	while (N--)
	{
		int m;
		cin >> m;
		while (m--)
		{
			int length, diameter, ID;
			cin >> length >> diameter >> ID;
			steel.insert(Steel(length, diameter, ID));
		}
		set<Steel>::iterator it = steel.end();
		it--;
		cout << it->ID << endl;
		steel.clear();
	}
}