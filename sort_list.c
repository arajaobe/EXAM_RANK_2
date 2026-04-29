#include <stdio.h>

typedef struct sort_list
{
	int	data;
	struct sort_list *next;
}	t_list;

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *temp;
	t_list *current;
	int swapped;

	if (!lst)
		return NULL;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		current = lst;
		while (current)
		{
			if (!cmp(current->data, current->next->data))
			{
				temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
				swapped = 1;
			}
			current = current->next;
		}
	}
	return (lst);
}
