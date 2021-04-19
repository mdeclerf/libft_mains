#include <stdio.h>
#include "libft.h"
int main ()
{
	t_list *list = ft_lstnew("bla");
	t_list **list_ptr;
	list_ptr = &list;
	printf("list content |%s| ",list->content);
	printf("list next |%p| \n", list->next);
	t_list *new = ft_lstnew("YOLOO");
	printf("new content |%s| ",new->content);
	printf("new next |%p| \n", new->next);
	ft_lstadd_front(list_ptr, new);
	printf("list content |%s| ",list->content);
	printf("list next |%p| \n", list->next);
	//iteration over the list to check if the second node has become the first node of list
	while (list != NULL) 
	{
        printf("CHECK %s\n", list->content);
        list = list->next;
	}
}