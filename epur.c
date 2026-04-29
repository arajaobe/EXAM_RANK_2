#include <unistd.h>

void putchr(char c)
{
	write(1, &c, 1);
}


void	epur(char *str)
{
	int i;

	i = 0;
	while ( str[i] == ' ' || str[i] == '\t')
			i++;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			putchr(str[i]);
			i++;
		}
		while ( str[i] == ' ' || str[i] == '\t')
			i++;
		if ( str[i])
			putchr(' ');
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		epur(argv[1]);
	}
	putchr('\n');
	return (0);
}
