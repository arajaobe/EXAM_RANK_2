#include <unistd.h>
#include <stdio.h>

void 	putchr(char c)
{
	write(1, &c, 1);
}

int ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;
	int digit;
	int i;
	char c;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		c = ft_tolower(str[i]);
		if (c >= '0' && c <= '9')
			digit = c -'0';
		else if (c >= 'a' && c <= 'f')
			digit = c - 'a' + 10;
		else
			break;
		if (digit >= str_base)
			break;
		result = result * str_base + digit;
		i++;
	}
	result = result * sign;
	return (result);
}

int main ()
{
	char *base = "0101";
	int res;

	res = ft_atoi_base(base, 2);
	printf("%d", res);
	return 0;
}
