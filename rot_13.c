#include <unistd.h>
#include <stdio.h>

void	rot13(char *argv)
{
	char	*alpha;
	char	*alpha_13;
	int i;
	int len;
	int n;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	alpha_13 = "nopqrstuvwxyzabcdefghijklm";
	len = 0;	
	while (argv[len] != '\0')
		len++;
	i = 0;
	while (i < len)
	{
		n = 0;
		while (n <= 26)
		{
			if (argv[i] == alpha[n])
				break;
			n++;
		}
		if (argv[i] >= 'a' && argv[i] <= 'z')
			write(1, &alpha_13[n], 1);
		else
			write(1, &argv[i], 1);
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
	rot13(argv[1]);
	return 0;
}
