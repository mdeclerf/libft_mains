
#include <stdio.h>
#include "libft.h"

int main ()
{
   const char * str = "jesuisunephrase";
	printf ("ft		%s\n", ft_strchr(str,'e'));
	printf ("sys	%s\n", strchr(str,'e'));

	const char * str_a = "coucou";
	printf ("ft		%s\n", ft_strchr(str_a,'z'));
	printf ("sys	%s\n", strchr(str_a,'z'));

	const char * str_b = "";
	printf ("ft		|%s|\n", ft_strchr(str_b,'\0'));
	printf ("sys	|%s|\n", strchr(str_b,'\0'));
}