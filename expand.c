#include <unistd.h>

void 	putchr(char c)
{
	write(1, &c, 1);
}

void 	putstring(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	expand(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			putchr(str[i]);
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
			putstring("   ");
	}
}
int main (int argc, char **argv)
{
	if (argc == 2 && argv[1])
	{
		expand(argv[1]);
	}
	putchr('\n');
	return (0);
}
