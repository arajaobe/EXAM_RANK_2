
#include <stdio.h>
#include <stdlib.h>

int	absol(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int len;
	int i;
	int *numb;

	len = absol((end - start) + 1);
	numb = malloc(len  * sizeof(int));
	i = 0;
	while (i <= len)
	{
		if (start < end)
			numb[i++] = start++;
		else if (start > end)
			numb[i--] = start--;
		else
			numb[i] = 0;
	}
	return(numb);
}
