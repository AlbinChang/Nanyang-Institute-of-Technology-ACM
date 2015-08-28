#include <iostream>
using namespace std;
int main(){

	int N = 0;
	cin >> N;
	

		while (true)
		{


			int y, m, d;
			cin >> y >> m >> d;
			switch (m){
			case 12:
				d = d + 334; //31+28+31+30+31+30+31+31+30+31+30
				break;
			case 11:
				d = d + 304; //31+28+31+30+31+30+31+31+30+31
				break;
			case 10:
				d = d + 273; //31+28+31+30+31+30+31+31+30
				break;
			case 9:
				d = d + 243; //31+28+31+30+31+30+31+31
				break;
			case 8:
				d = d + 212; //31+28+31+30+31+30+31
				break;
			case 7:
				d = d + 181; //31+28+31+30+31+30

				break;
			case 6:
				d = d + 151; //31+28+31+30+31
				break;
			case 5:
				d = d + 120; //31+28+31+30
				break;
			case 4:
				d = d + 90; //31+28+31
				break;
			case 3:
				d = d + 59;//31+ 28
				break;
			case 2:
				d = d + 31;
				break;
			case 1:
				d = d + 0;
				break;
			}
			if (m > 2){
				if (y % 4){
					cout << d;
				}
				else{
					if (y % 4 == 0 && y % 100 != 0)
						d = d + 1;
					if (y % 400 == 0)
						d = d + 1;
					cout << d;
				}
			}
			else{
				cout << d;
			}
			cout << endl;
			if (--N == 0)
				break;
		}
	
	return 0;
}