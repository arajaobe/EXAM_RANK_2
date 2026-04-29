#include <stdio.h>

int power_two(int n)
{
	int i;
	int res;

	res = n;
	if ( n == 0)
		return 0;
	while (res % 2 == 0)
		res = res / 2;
	if (res == 1)
		return (1);
	return (0);
}
int main ()
{
	printf("%d", power_two(258));
	return 0;
}

