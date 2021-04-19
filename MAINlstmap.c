
#include <stdio.h>
#include "libft.h"
static void    del(void *content)
{
    content = NULL;
}

void	*fonction(void * content)
{
	char *s = content;

	s[0] = '*';
	s[1] = '*';
	return (content);
}

int main ()
{
	t_list *list = ft_lstnew(ft_strdup("aaaa"));
	t_list **list_ptr;
	list_ptr = &list;
	t_list *new = ft_lstnew(ft_strdup("bbbb"));
	ft_lstadd_back(list_ptr, new);
	t_list *new2 = ft_lstnew(ft_strdup("cccc"));
	ft_lstadd_back(list_ptr, new2);
	t_list *new3 = ft_lstnew(ft_strdup("dddd"));
	ft_lstadd_back(list_ptr, new3);
	
	void *(*ptrf)(void *);
	ptrf = &fonction;
	void (*ptrd)(void *);
	ptrd = &del;
	
	t_list *return_list = ft_lstmap(list, fonction, del);
	while (return_list != NULL) 
	{
        printf("return_list %s\n", return_list->content);
        return_list = return_list->next;
	}
    return (0);
}