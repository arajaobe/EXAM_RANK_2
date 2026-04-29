
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
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
	res = res * sign;
	return res;
}

int main (int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("%d\n", ft_atoi(argv[1]));
	return 0;
}
