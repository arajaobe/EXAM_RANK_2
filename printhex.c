
#include <unistd.h>

void 	putchr(char c)
{
	write(1, &c, 1);
}
void	hex(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		hex(n / 16);
	putchr(base[n % 16]);
}

void	putnumber(int n)
{
	int nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		putnumber(nbr / 10);
	putchr(nbr % 10 + '0');
}
int main ()
{
	hex(255);
	return 0;
}
