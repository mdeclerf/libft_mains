#include <stdio.h>
#include "libft.h"
int main ()
{
	t_list *list = ft_lstnew("aaaa");
	t_list **list_ptr;
	list_ptr = &list;
	t_list *new = ft_lstnew("bbbbb");
	ft_lstadd_back(list_ptr, new);
	t_list *new2 = ft_lstnew("cccc");
	ft_lstadd_back(list_ptr, new2);
	t_list *new3 = ft_lstnew("dddd");
	ft_lstadd_back(list_ptr, new3);
	while (list != NULL) 
	{
        printf("CHECK %s\n", list->content);
        list = list->next;
	}
}