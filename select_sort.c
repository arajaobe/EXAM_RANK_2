#include <stdio.h>

void sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	int min;

	i = 0;
	while (i < size)
	{
		min  = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
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
