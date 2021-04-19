#include <stdio.h>
#include "libft.h"


int main ()
{
	printf(" |%s| %p\n",ft_calloc(12,10),ft_calloc(12,10));
	printf(" |%s| %p\n",ft_calloc(20,10),ft_calloc(20,10));
	printf(" |%s| %p\n",ft_calloc(12,8),ft_calloc(12,8));
	printf(" |%s| %p\n",ft_calloc(0,0),ft_calloc(0,0));
}