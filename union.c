#include <unistd.h>

int	already_printed(char *str, char c, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int	i;
	int	s;
	int 	count;
	char	print[512];

	if (argc != 3)
		return 0;
	s = 1;
	count = 0;
	while (s <= 2)
	{
		i = 0;
		while (argv[s][i])
		{
			if (!already_printed(print, argv[s][i], count))
			{
				print[count++] = argv[s][i];
				write(1, &argv[s][i], 1);
			}
			i++;
		}
		s++;
	}
	write(1, "\n", 1);
	return 0;
}
