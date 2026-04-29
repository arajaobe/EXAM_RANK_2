
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	operation(int a, char *b,  int c)
{
	int res;

	res = 0;
	if (b[0] == '+')
		res = a + c;
	else if (b[0] == '-')
		res = a - c;
	else if (b[0] == '*')
		res = a * c;
	else if (b[0] == '/')
		res = a / c;
	else if (b[0] == '%')
		res = a % c;
	return (res);
}

int main (int argc, char **argv)
{
	int a;
	int b;
	int res;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = operation(a, argv[2], b);
	printf("%i\n", res);
	return 0;
}
