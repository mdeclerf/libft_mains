

#include "libft.h"
#include <stdio.h>

int main()
{

	printf("ft %s ",ft_memchr("ordinateur", '@', 4));
    printf("sys %s ",memchr("ordinateur", '@', 4));

   	printf( "\n\n");

 	printf("ft %s ",ft_memchr("pierre qui roule", 'o', 4));
    printf("sys %s ",memchr("pierre qui roule", 'o', 4));
	printf( "\n\n");

	printf("ft %s ",ft_memchr("pierre qui roule", 'o', 45));
    printf("sys %s ",memchr("pierre qui roule", 'o', 45));
	printf( "\n\n");

	printf("ft %s ",ft_memchr("ordinateur", 117, 10));
    printf("sys %s ",memchr("ordinateur", 117, 10));
	printf( "\n\n");

	printf("ft %s ",ft_memchr("", 117, 10));
    printf("sys %s ",memchr("", 117, 10));
}