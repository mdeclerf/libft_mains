#include <stdio.h>
#include "libft.h"
int main ()
{
	t_list *liste = ft_lstnew("YOLOO");
	printf(" |%s| ",liste->content);
	printf(" |%p| ", liste->next);
}