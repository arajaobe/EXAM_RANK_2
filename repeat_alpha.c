#include <unistd.h>
#include <stdio.h>

void	putchr_loop(char c, int n)
{
	while (n >= 0)
	{
		write(1, &c, 1);
		n--;
	}
}


void	repeat(char **argv)
{
	int n_upper;
	int len;
	int i;
	char *upper;
	char *lower;

	len = 0;
	while (argv[1][len] != '\0')
		len++;
	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	lower = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (i < len)
	{
		n_upper = 0;
		while (n_upper <= 26)
		{
			if (argv[1][i] == upper[n_upper] || argv[1][i] == lower[n_upper])
				break;
			n_upper++;
		}
		if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				putchr_loop(argv[1][i], n_upper);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	repeat(argv);

	return 0;
}
