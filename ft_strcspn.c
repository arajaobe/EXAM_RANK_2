#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;

	i = 0;
	while (s[i] != reject[0] && s[i] != '\0')
		i++;
	return (i+1);
}

int main (int argc, char **argv)
{
	if (argc != 3)
		return 0;
	printf("%ld", ft_strcspn(argv[1], argv[2]));
	return 0;
}


