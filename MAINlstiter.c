#include "libft.h"
#include <stdio.h>

void	fonction(void * content)
{
	char *s = content;

	s[0] = '*';
	s[1] = '*';
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
	t_list *temp = list;
	void (*ptr)(void *);
	ptr = &fonction;
	
	while (list != NULL) 
	{
        printf("list %s\n", list->content);
        list = list->next;
	}
	
	ft_lstiter(temp, ptr);
	
	while (temp != NULL) 
	{
        printf("temp %s\n", temp->content);
        temp = temp->next;
	}
}