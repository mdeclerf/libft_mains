#include <stdio.h>

#include <stdlib.h>
#include "libft.h"

int main ()
{
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 2, 5));
	printf(" |%s| \n\n", ft_substr("", 3, 4));
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 100, 4));
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 1, 100));
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 18, 1));
}

