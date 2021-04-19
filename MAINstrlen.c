#include <stdio.h>
#include "libft.h"
int main ()
{
	printf("is				%lu \n", ft_strlen("rien ne sert de courir, mieux vaut partir a point"));
	printf("should be		%lu \n\n", strlen("rien ne sert de courir, mieux vaut partir a point"));

	printf("is				%lu \n", ft_strlen(""));
	printf("should be		%lu \n\n", strlen(""));

	printf("is				%lu \n", ft_strlen("rien ne sert de courir, \n mieux vaut \t partir a point"));
	printf("should be		%lu \n\n", strlen("rien ne sert de courir, \n mieux vaut \t partir a point"));
}