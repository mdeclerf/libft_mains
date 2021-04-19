
#include "libft.h"
#include <stdio.h>

int main()
{
    char str[] = "abcdefghijkl";
    char str_b[] = "abcdefghijkl";
    int len_str = strlen(str);
    int i = 0;

    ft_bzero( str, 4);
    bzero( str_b, 4);

    while (i < len_str)
    {
        printf( "ft_bzero |%c| bzero |%c| ", str[i], str_b[i]);
        printf( "\n");
        i++;
    }
	printf("\n\n");
	
	char str1[] = "";
    int len_str1 = strlen(str1);
    int i1 = 0;

    ft_bzero( str1, 4);
    while (i1 < len_str1)
    {
        printf( "ft_bzero |%c|", str1[i1]);
        printf( "\n");
        i1++;
    }
}
