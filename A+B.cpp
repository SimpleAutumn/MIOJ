#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	long long a,b;

		cin >> a >> b;
		if (a < 0 && b <0 && a>pow(2, 23) && b>pow(2, 23))
		{
			cin >> a >> b;
		}

	cout << a + b << endl;

	return 0;
}