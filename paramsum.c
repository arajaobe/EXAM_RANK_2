#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;

	if (argc <= 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	i = 0;
	while (argv[i])
	{
		i++;
	}
	printf("%d", i - 1);
	return (0);

}
