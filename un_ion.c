
#include <unistd.h>

int	is_printed(char *str, char c, int len)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while ( i < len)
	{
		if (str[i] == c)
			res = 1;
		i++;
	}
	return (res);
}

int main (int argc, char **argv)
{
	int s;
	int i;
	int count;
	char print[512];

	if (argc == 3)
	{
		count = 0;
		s = 1;
		while (s <= 2)
		{
			i = 0;
			while (argv[s][i])
			{
				if(!is_printed(print, argv[s][i], count))
				{
					print[count++] = argv[s][i];
					write(1, &argv[s][i], 1);
				}
				i++;
			}
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int main(int argc, char **argv)
{
	int s;
	int i;
	int count;
	char print[512];

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	count = 0;
	s = 1;
	while(s <= 2)
	{
		i = 0;
		while(argv[s][i])
		{
			if (!is_printed(print, argv[s][i], count))
			{
				print[count++] = argv[s][i];
				write(1, &argv[s][i], 1);
			}
			i++;
		}
		s++;
	}
	write(1, "\n", 1);
	return (0);
}

int	is_printedd(char *str, char c, int len)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (i < len)
	{
		if (str[i] == c)
			res = 1;
		i++;
	}
	return res;
}

int main(int argc, char **argv)
{
	int arg;
	int i;
	int count;
	char tab[512];

	arg = 1;
	count  = 0;
	while (arg <= 2)
	{
		i = 0;
		while (argv[arg][i])
		{
			if (!is_printed(tab, argv[arg][i], count))
			{
				tab[count++] = argv[arg][i];
				write(1, &argv[arg][i], 1);
			}
			i++;
		}
		arg++;
	}

}
