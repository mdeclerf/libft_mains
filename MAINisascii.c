#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main ()
{
    printf("200 		is 		%d\n", ft_isascii(200));
    printf("		should be 	%d\n\n", isascii(200));
    printf("B 		is 		%d\n", ft_isascii('B'));
    printf("		should be 	%d\n\n", isascii('B'));
	printf("b 		is 		%d\n", ft_isascii('b'));
    printf("		should be 	%d\n\n", isascii('b'));
	printf("166 	is 		%d\n", ft_isascii(166));
    printf("		should be 	%d\n\n", isascii(166));
	printf("@ 		is 		%d\n", ft_isascii('@'));
    printf("		should be 	%d\n\n", isascii('@'));
	printf("-12 		is 		%d\n", ft_isascii(-12));
    printf("		should be 	%d\n", isascii(-12));
}