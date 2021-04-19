#include "libft.h"
static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, " // ", 4);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

int main ()
{
	char * strA = "il*ne*faut*pas*vendre*la*peau*de*l,ours*avant*de*l'avoir*tue";
	char cA = '*';
	char	**tabstrA = ft_split(strA, cA);
	ft_print_tabstr(tabstrA);

	char * strB = "*il*********ne*faut****pas***vendre*la*peau***de*l,ours*avant*de*l'avoir*tue************";
	char cB = '*';
	char	**tabstrB = ft_split(strB, cB);
	ft_print_tabstr(tabstrB);

	char * strC = "";
	char cC = '*';
	char	**tabstrC = ft_split(strC, cC);
	ft_print_tabstr(tabstrC);

	char * strD = "pierre qui roule n'amasse pas mousse";
	char cD = 'i';
	char	**tabstrD = ft_split(strD, cD);
	ft_print_tabstr(tabstrD);

	char * strE = "Diana Ross, née le 26 mars 1944 à Détroit (Michigan), est une chanteuse, compositrice et actrice américaine. ";
	char cE = ' ';
	char	**tabstrE = ft_split(strE, cE);
	ft_print_tabstr(tabstrE);

	char * strF = "il*ne*faut*pas*vendre*la*peau*de*l,ours*avant*de*l'avoir*tue";
	char cF = '@';
	char	**tabstrF = ft_split(strF, cF);
	ft_print_tabstr(tabstrF);
}