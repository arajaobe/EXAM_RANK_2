#include <unistd.h>

int strln(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void	finder(char *s1, char *s2)
{
	int i;
	int j;
	int len;
	int len2;
	int count;

	i = 0;
	j = 0;
	count = 0;
	len = strln(s1);
	len2 = strln(s2);
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				count++;
				break;
			}
			j++;
		}
		j++;
		if (j >= len2 - 1)
			break;
		i++;
	}
	if (count == len)
	{
		i = 0;
		j = 0;
		while (s1[i])
		{
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
			j++;
			i++;
		}
	}
}
int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	finder(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
