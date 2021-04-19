

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int main ()
{
    printf("54 is 		%d\n", ft_tolower(54));
    printf("should be 	%d\n\n", tolower(54));
    printf("_1 is 		%d\n", ft_tolower(-1));
    printf("should be 	%d\n\n", tolower(-1));
	printf("256 is 		%d\n", ft_tolower(256));
    printf("should be 	%d\n\n", tolower(256));
	printf("321 is 		%d\n", ft_tolower(321));
    printf("should be 	%d\n\n", tolower(321));
	printf("68 is 		%d\n", ft_tolower(68));
    printf("should be 	%d\n\n", tolower(68));
	printf("90 is 		%d\n", ft_tolower(90));
    printf("should be 	%d\n\n", tolower(90)); 
}

