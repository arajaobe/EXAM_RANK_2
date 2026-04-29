#include <unistd.h>

void	first_word(int argc, char **argv)
{
	int 	i;
	int	j;
	int 	len;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return ;
	}
	len = 0;
	while (argv[1][len] != '\0')
		len++;
	i = 0;
	if (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
		i++;
	if (i == len)
	{
		write(1, "\n", 1);
		return ;
	}
	while (i < len)
	{
		if (argv[1][i] == 32 || (argv[1][i] >=9 && argv[1][i] <= 13))
			break;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	first_word(argc, argv);
	return 0;
}
