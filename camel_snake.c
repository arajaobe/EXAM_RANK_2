#include <unistd.h>
#include <stdlib.h>

int	snake_len(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			len++;
		len ++;
		i++;
	}
	return (len);
}


char	*camel_snake(char *str)
{
	int i;
	int j;
	int len;
	char	*result;

	len = snake_len(str);
	result = malloc(len + 1);
	i = 0;
	j = 0;
	while (j <= len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0)
				result[j++] = '_';
			result[j] = str[i] + 32;
		}
		else
			result[j] = str[i];
		i++;
		j++;
	}
	result[len] = '\0';
	return (result);
}

int main (int argc, char **argv)
{
	int len;
	char *res;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
        len = snake_len(argv[1]);
        res = camel_snake(argv[1]);
	write(1, res, len);
	write(1, "\n", 1);
	return 0;
}
