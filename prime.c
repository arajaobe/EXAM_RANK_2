
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	res = 0;
	sign = 1;
	i = 0;
	while ( str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return (sign * res);
}


void  putchr(char c)
{
	write(1, &c, 1);
}

void	putnumber(int n)
{
	long int i;

	i = n;
	if (i < 0)
	{
		write (1, "-", 1);
		i = -i;
	}
	if (i >= 10)
		putnumber(i / 10 );
	putchr(i % 10 + '0');
}

int	prime(int n)
{
	int i;
	int c;
	int nb;
	int count;
	int is_prime;

	is_prime = 0;
	count = 0;
	if ( n <= 1)
		return (is_prime);
	if (n == 2 || n == 3)
	{
		is_prime = 1;
		return (is_prime);
	}
	i = 1;
	nb = 0;
	c = n / 2;
	while(i <= c)
	{
		nb = n % i;
		if (nb == 0)
			count++;
		i++;
	}
	if (count == 1)
		is_prime = 1;
	return (is_prime);
}

int prime_plus(int n)
{
	int i;
	int res;

	res = 0;
	if ( n < 1)
		return (res);
	i = 2;
	while (i <= n)
	{
		if (prime(i))
			res = res + i;
		i++;
	}
	return (res);
}


int main (int argc, char **argv)
{
	int nb;
	int res;

	nb = ft_atoi(argv[1]);
	if (argc != 2 || nb < 0)
	{
		putchr('0');
		write(1, "\n", 1);
		return (0);
	}
	res = prime_plus(nb);
	putnumber(res);
	return 0;
}

//int main ()
//{
//	int res;
//	res = prime_plus(5);
//	printf("%d", res);
//}
