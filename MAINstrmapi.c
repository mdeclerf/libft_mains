#include "libft.h"
# include <stdio.h>


char		mapi(unsigned int i, char c)
{
	i = 0;
	while (i == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		else if (c >= 'A' && c <= 'Z')
			return (c + 32);
		else
			return (c);
	}
	return (c);
}

int main ()
{
	
	printf(" |%s| ", ft_strmapi("qui dort dine", &mapi));
	printf(" |%s| ", ft_strmapi("", &mapi));
	printf(" |%s| ", ft_strmapi("QUI VOLE UNE POULE, DORMIRA BIEN", &mapi));
	printf(" |%s| ", ft_strmapi("	ce TEST est UN peu STUPIDE ??", &mapi));
}