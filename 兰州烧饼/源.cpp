#include <iostream>
using  namespace std;

int main()
{
	int n, k;
	while (cin>>n>>k)
	{
		int i ;
		for (i= 1; (i*k / 2)< n; i++);	
		if ( i == 1)
			cout << i+1 << endl;
		else
			cout << i << endl;

	}
}