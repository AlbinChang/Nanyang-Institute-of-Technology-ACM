#include <iostream>
#include <string>
#include <map>
using namespace std;


int get_scholarship(int qimo, int banji, char ganbu, char xibu, int lunwen)
{
	int scholarship = 0;
	if (qimo > 80 && lunwen >= 1)
		scholarship += 8000;
	if (qimo > 85 && banji > 80)
		scholarship += 4000;
	if (qimo > 90)
		scholarship += 2000;
	if (qimo > 85 && xibu == 'Y')
		scholarship += 1000;
	if (banji > 80 && ganbu == 'Y')
		scholarship += 850;

	return scholarship;
}
int main()
{
	int N;
	cin >> N;
	while (true)
	{
		multimap<int, string> students;
		string name;
		int qimo;
		int banji;
		char ganbu;
		char xibu;
		int lunwen;
		int n;
		cin >> n;
		while (true)
		{
			cin >> name >> qimo >> banji >> ganbu >> xibu >> lunwen;
			int scholarship = get_scholarship(qimo, banji, ganbu, xibu, lunwen);
			students.insert(pair<int,string>(scholarship, name));
			if (--n == 0)
				break;
		}
		multimap<int, string>::iterator it = students.end();
		string max_name = (--it)->second;
		int max_scholarship = it->first;
		for (it--; it->first == max_scholarship; it--)
		{
			max_name = it->second;
		}
		int sum = 0;
		for (it = students.begin(); it != students.end(); it++)
		{
			sum += it->first;
		}
		cout << max_name << endl;
		cout << max_scholarship << endl;
		cout << sum << endl;

		students.clear();

		if (--N == 0)
			break;
	}
}