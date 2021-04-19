#include <stdio.h>
#include "libft.h"
int main ()
{
	char * str = "Au pays des aveugles le borgne est roi";
	printf(" %s", ft_strdup(str));
	printf(" \n");
	char * str1 = "";
	printf(" %s", ft_strdup(str1));
	printf(" \n");
	char * str2 = "yodlododododo";
	printf(" %s", ft_strdup(str2));
	printf(" \n");
}