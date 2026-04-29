#include <unistd.h>
#include <stdlib.h>

int	camel_len(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			len++;
		len++;
		i++;
	}
	return (len);
}



char	*cammel_to_snake(char *str)
{
	int i;
	int j;
	int len;
	char *res;

	len = camel_len(str);
	res = malloc(len + 1);
	i = 0;
	j = 0;
	while (j <= len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0)
				res[j++] = '_';
			res [j] = str[i] + 32;
		}
		else
			res[j] = str[i];
		i++;
		j++;
	}
	res[len] = '\0';
	return (res);
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
        len = camel_len(argv[1]);
        res = cammel_to_snake(argv[1]);
	write(1, res, len);
	write(1, "\n", 1);
	return 0;
}
