
#include <stdio.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int main()
{
    char str_sys[] = "abcdefghijkl";
    char dst_sys[] = "************";
    char str_ft[] = "abcdefghijkl";
    char dst_ft[] = "************";
    int len_str = ft_strlen(str_sys);
    int i = 0;

    memcpy(dst_sys, str_sys, 5);
    ft_memcpy(dst_ft, str_ft, 5);

    while (i < len_str)
    {
        printf( "ft_memcpy |%c| memcpy |%c| ", dst_ft[i], dst_sys[i] );
        printf( "\n");
        i++;
    }

    printf( "\n\n");
    char str_sysb[] = "";
    char dst_sysb[] = "************";
    char str_ftb[] = "";
    char dst_ftb[] = "************";
    int len_strb = ft_strlen(str_sys);
    int ib = 0;

    memcpy(dst_sysb, str_sysb, 5);
    ft_memcpy(dst_ftb, str_ftb, 5);

    while (ib < len_strb)
    {
        printf( "ft_memcpy |%c| memcpy |%c| ", dst_ftb[ib], dst_sysb[ib] );
        printf( "\n");
        ib++;
    }
    printf( "\n\n");

    char str_sysc[] = "abcdefghijkl";
    char dst_sysc[] = "nnnn";
    char str_ftc[] = "abcdefghijkl";
    char dst_ftc[] = "nnnn";
    int ic = 0;

    memcpy(dst_sysc, str_sysc, 5);
    ft_memcpy(dst_ftc, str_ftc, 5);

    while (ic < 5)
    {
        printf( "ft_memcpy |%c| memcpy |%c| ", dst_ftc[ic], dst_sysc[ic] );
        printf( "\n");
        ic++;
    }
}

