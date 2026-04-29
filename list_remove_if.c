
#include <stdio.h>

typedef struct s_list
{
	void	*data;
	struct s_list	*next;
} 			t_list;


void	ft_list_remove(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *current;

	if (!begin_list && !*begin_list)
		return;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	current = *begin_list;
	while(current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			tmp = current->next;
			current->next = current->next->next;
			free(tmp);
		}
		else
			current = current->next;
	}
}
