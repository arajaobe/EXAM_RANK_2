#include <stdio.h>

int	hcf(int a, int b)
{
	int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}


unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int res;

	res = a * b / hcf(a, b);
	return (res);
}

