#include <stdio.h>
#include <stdlib.h>


int char_len(long nbr)
{
	int i;
	long n;
	int res;

	res = 0;
	i = 0;
	n = nbr;
	if (n <=0)
	{
		n = -n;
		res = 1;
	}

	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

void	getnum(long nbr, int len, char *str)
{
	while (nbr != 0)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
}
char	*ft_itoa(int nbr)
{
	int len;
	long n;
	char *str;

	n = nbr;
	len = char_len(n);
	str = malloc(len + 1);
	if (!str)
		return NULL;
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	getnum(n, len, str);
	return (str);
}

int main()
{
	char *s;

	s = ft_itoa(-5696);
	printf("%s", s);
	return 0;
}
