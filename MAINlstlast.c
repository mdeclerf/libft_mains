#include <stdio.h>
#include "libft.h"
int main ()
{
	t_list *list = ft_lstnew("ccccc");
	t_list **list_ptr;
	list_ptr = &list;
	t_list *new = ft_lstnew("bbbbbb");
	ft_lstadd_front(list_ptr, new);
	t_list *new2 = ft_lstnew("aaaaa");
	ft_lstadd_front(list_ptr, new2);
	printf(" %s ",ft_lstlast(list)->content);
}


