
#include <unistd.h>

void	putchr(char c)
{
	write(1, &c, 1);
}

void	putnumber(int n)
{
	int nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		putnumber(nbr / 10);
	putchr(nbr % 10 + '0');
}


int	ft_atoi(char *s)
{
	int res;
	int i;
	int sign;

	sign = 1;
	i = 0;
	res = 0;
	if (s[i] == 32 || s[i] >= 9 && s[i] <= 13)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10;
		res = res + (s[i] - '0');
		i++;
	}
	return (res * sign);
}


void	table(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = 1;
	while (i <= 9)
	{
		putnumber(i);
		write(1, " x ", 3);
		putnumber(n);
		write(1, " = ", 3);
		putnumber(i * n);
		putchr('\n');
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		return 0;
	}
	table(ft_atoi(argv[1]));
	return 0;
}
