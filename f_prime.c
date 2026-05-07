
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


int is_prime(int n)
{
	int i;

	if (n < 2)
		return 0;
	if (n == 2 || n == 3)
		return 1;
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return (1);
}

void	f_prime(int n)
{
	int i;

	if (n == 1)
	{
		printf("1");
		return;
	}
	i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
			if (n > 1)
				printf("*");
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	int num;

	if (argc < 2)
	{
		printf("\n");
		return 0;
	}
	num = atoi(argv[1]);
	f_prime(num);
	printf("\n");
	return 0;
}
