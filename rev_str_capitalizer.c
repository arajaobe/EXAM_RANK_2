
#include <unistd.h>

int	is_letter(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z'));
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char to_upper(char c)
{
	if (c >= 'a' && c >= 'a')
		return (c - 32);
	return (c);
}

void	process_word(char *str, int start, int end)
{
	int i;
	char c;

	i = start;
	while (i <= end)
	{
		c = str[i];
		if (i == start && is_letter(c))
			c = to_upper(c);
		else
			c = to_lower(c);
		write(1, &c, 1);
		i++;
	}
}
int main (int argc, char **argv)
{
	int arg;
	int start;
	int end;
	int i;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			if (argv[arg][i] == ' ' || argv[arg][i] == '\t')
			{
				write(1, &argv[arg][i], 1);
				i++;
			}
			else
			{
				start = i;
				while (argv[arg][i] && argv[arg][i] != ' ' && argv[arg][i] != '\t')
					i++;
				end = i - 1;
				process_word(argv[arg], start, end);
			}
		}
		arg++;
		write(1, "\n", 1);
	}
	return (0);
}

