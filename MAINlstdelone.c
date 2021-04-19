#include <stdio.h>
#include "libft.h"
static void    del(void *content)
{
    free(content);
}

int        main(void)
{
    t_list    *lst;
    t_list    *tmp;
    t_list    *tmp2;

    lst = ft_lstnew(ft_strdup("4"));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3")));

    tmp = lst;
    ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("5")));

    tmp = ft_lstlast(lst);
    printf("last element : |%s|\n", (char *)tmp->content);

    printf("\nlstsize : %i\n", ft_lstsize(lst));

    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("0")));

    tmp = lst->next;
    tmp2 = tmp->next;
    ft_lstdelone(tmp, del);
    lst->next = tmp2;
	while (lst != NULL) 
	{
        printf("CHECK %s\n", lst->content);
        lst = lst->next;
	}
    return (0);
}