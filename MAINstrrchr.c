
#include <stdio.h>
#include "libft.h"
int main ()
{
   const char * str = "jesuisunephrasegloubiglouba";
	printf ("ft		%s\n", ft_strrchr(str,'e'));
	printf ("sys	%s\n\n", strrchr(str,'e'));

	const char * str_a = "coucou";
	printf ("ft		%s\n", ft_strrchr(str_a,'z'));
	printf ("sys	%s\n\n", strrchr(str_a,'z'));

	const char * str_b = "";
	printf ("ft		|%s|\n", ft_strrchr(str_b,'\0'));
	printf ("sys	|%s|\n", strrchr(str_b,'\0'));
}
