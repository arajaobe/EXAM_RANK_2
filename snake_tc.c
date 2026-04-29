#include <unistd.h>

int	camel_len(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '_' && (str[i + 1] >= 'a' && str[i + 1 ] <= 'z'))
			count++;
		i++;
	}
	i = 0;
	while (str[i])
		i++;
	i = i - count;
	return i;
}

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	snake_camel(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			if (str[i] == '\0')
				break;
			if (str[i] >= 'a' && str[i] <= 'z')
				ft_putchr(str[i] - 32);
			else
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		snake_camel(argv[1]);
	write(1, "\n", 1);
	return 0;
}
