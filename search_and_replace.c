#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}


void	search(char *str, char *letter_fnd, char *letter_rpl)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (letter_fnd[0] == str[i])
			count = 1;
		i++;
	}
	if (!count)
	{
		putstr(str);
		write(1, "\n", 1);
		return ;
	}
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == letter_fnd[0])
				write(1, &letter_rpl[0], 1);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	search(argv[1], argv[2], argv[3]);
	return 0;
}
