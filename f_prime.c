
#include <stdio.h>
#include <stdlib.h>

int	prime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	i = 2;
	while ( i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	factor_prime(int n)
{
	int i;
	int res;

	i = 1;
	while(i <= n)
	{
		res = n % i;
		if ( res == 0 && prime(i))
			printf("%d ", i);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n");
		return (0);
	}
	factor_prime(atoi(argv[1]));
	return (0);
}
