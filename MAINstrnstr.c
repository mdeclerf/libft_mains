#include <stdio.h>
#include "libft.h"

int main ()
{
	printf ("ft		%s\n", ft_strnstr("coucou je suis une phrase de test","e",10));
	printf ("sys	%s\n\n", strnstr("coucou je suis une phrase de test","e",10));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "promenais",60));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "promenais",60));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "promenaISs",3));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "promenaISs",3));

	printf ("ft		%s\n", ft_strnstr(" chapi chapo chabada", "chato",4));
	printf ("sys	%s\n\n", strnstr(" chapi chapo chabada", "chato",4));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "promenaISs",19));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "promenaISs",19));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "\0",19));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "\0",19));

	printf ("ft		%s\n", ft_strnstr("coucou je suis une phrase de test une phrase de test","une",10));
	printf ("sys	%s\n\n", strnstr("coucou je suis une phrase de test une phrase de test","une",10));
}
