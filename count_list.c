
int	ft_listsize(t_list *lst)
{
	int count;

	count  = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
