
#include <unistd.h>
#include <stdio.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t');
}

void	write_word(char *str, int start, int end)
{
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

//int main(int argc, char **argv)
//{
//	int i;
//	int start;
//	int end;
//	int start_first;
//	int end_first;
//	int space;
//	char *str;

//	if (argc != 2)
//	{
//		write(1, "\n", 1);
//		return (0);
//	}
//	str = argv[1];
//	i = 0;
//	while (str[i] &&  is_sep(str[i]))
//		i++;
//	start_first = i;
//	while (str[i] && !is_sep(str[i]))
//		i++;
//	end_first = i;
//	space = 0;
//	while (str[i])
//	{
//		while(str[i] && is_sep(str[i]))
//			i++;
//		start = i;
//		while (str[i] && !is_sep(str[i]))
//			i++;
//		end = i;
//		if (end > start)
//		{
//			if (space)
//				write(1, " ", 1);
//			write_word(str, start, end);
//			space = 1;
//		}
//	}
//	if (space)
//		write(1, " ", 1);
//	write_word(str, start_first, end_first);
//	write(1, "\n", 1);
//	return (0);
//}

void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int j;
	int min;
	int temp;

	i = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[min] > tab[j])
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = tab[i];
			tab[i] = tab[min];
			tab[min] = temp;
		}
		i++;
	}
}
int main()
{
	int tab[5] = {2, 6, 3, 1 , 4};
	int i;

	sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return 0;

}

int 	is_separator(char c)
{
	return (c == ' ' || c == '\t');
}

void	writeword(char *str, int start, int end)
{
	int i;

	i = start;
	while (i < end)
	{
		write(1, &str[start], 1);
		i++;
	}
}
void	ft_rostring(char *str)
{
	int i;
	int start_first;
	int end_first;
	int start;
	int end;
	int space;

	space = 0;
	i = 0;
	while (str[i] && is_separator(str[i]))
		i++;
	start_first = i;
	while (str[i] && !is_separator(str[i]))
		i++;
	end_first = i;
	while (str[i])
	{
		while (str[i] && is_separator(str[i]))
			i++;
		start = i;
		while (str[i] && !is_separator(str[i]))
			i++;
		end = i;
		if (start < end)
		{
			if (space)
				write(1, " ", 1);
			writeword(str, start, end);
			space = 1;
		}
		i++;
	}
	if (space)
		write(1, " ", 1);
	writeword(str, start_first, end_first);
}

