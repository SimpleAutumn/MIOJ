#include <iostream>
using namespace std;
int main()
{
	int b, a[257] = { 0 }, N = 0;
	while (cin >> b)
	{
		if (N < 20)
		{
			if (b < 257)
			{
				a[b]++;
				N++;
			}
		}
		else break;
		if (getchar() == '\n')  break;
	}
	for (N = 0; N <= 256; N++)
		if (a[N] == 1)
		{
			printf("%d", N);
			break;
		}
	return 0;
}
