#include <stdio.h>
#include "libft.h"

int main ()
{
	char * seta = "abcd";
	char * stra = "abcdradiateurabcd";
	printf(" %s \n\n", ft_strtrim(stra, seta));

	char * setb = "abcd";
	char * strb = "aaaaaaradiateurccccc";
	printf(" %s \n\n", ft_strtrim(strb, setb));

	char * setc = "abcd";
	char * strc = "radiateurabcd";
	printf(" %s \n\n", ft_strtrim(strc, setc));

	char * setd = "";
	char * strd = "radiateur";
	printf(" %s \n\n", ft_strtrim(strd, setd));

	char * sete = "abcd";
	char * stre = "";
	printf(" %s \n\n", ft_strtrim(stre, sete));

	char * setf = "*@#";
	char * strf = "#@je suis @ une phrase #.@@@@@";
	printf(" %s \n\n", ft_strtrim(strf, setf));
}