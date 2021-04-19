#include <stdio.h>
#include "libft.h"
static void    del(void *content)
{
    content = NULL;
}

int        main(void)
{
    t_list    *list;
	t_list	*temp;

    list = ft_lstnew(ft_strdup("3"));
	temp = list;
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("4")));
	
    ft_lstadd_front(&list, ft_lstnew(ft_strdup("2")));
    ft_lstadd_front(&list, ft_lstnew(ft_strdup("1")));
    ft_lstadd_front(&list, ft_lstnew(ft_strdup("0")));
	printf("\nlstsize : %i\n", ft_lstsize(list));
    ft_lstclear(&temp, del);
	while (temp != NULL) 
	{
        printf("CHECK temp %s\n", temp->content);
        temp = temp->next;
	}
	while (list != NULL) 
	{
        printf("CHECK list %s\n", list->content);
        list = list->next;
	}
    return (0);
}