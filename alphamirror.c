#include <unistd.h>

void	mirror(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = 'Z' - (str[i] - 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			c = 'z' - (str[i] - 'a');
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	mirror(argv[1]);
	return 0;
}
