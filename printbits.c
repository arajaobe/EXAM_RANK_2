#include <unistd.h>

void	printbits(unsigned char	octet)
{
	int i;

	i = 7;
	while (i >= 0)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char c;
	int i;

	i = 0;
	while (i < 8)
	{
		c = (c << 1) | (octet & 1);
		octet >> 1;
		i++;
	}
	return c;
}
