#include <stdio.h>
#include "libft.h"


int main()
{
    char str_sys[] = "abcdefghijkl";
    char dst_sys[] = "************";
    char str_ft[] = "abcdefghijkl";
    char dst_ft[] = "************";
    int len_str = strlen(str_sys);
    int i = 0;

    memmove(dst_sys, str_sys, 5);
    ft_memmove(dst_ft, str_ft, 5);

    while (i < len_str)
    {
        printf( "ft_memmove |%c| memmove |%c| ", dst_ft[i], dst_sys[i] );
        printf( "\n");
        i++;
    }

    printf( "\n\n");
    char str_sysb[] = "";
    char dst_sysb[] = "************";
    char str_ftb[] = "";
    char dst_ftb[] = "************";
    int len_strb = strlen(str_sys);
    int ib = 0;

    memmove(dst_sysb, str_sysb, 5);
    ft_memmove(dst_ftb, str_ftb, 5);

    while (ib < len_strb)
    {
        printf( "ft_memmove |%c| memmove |%c| ", dst_ftb[ib], dst_sysb[ib] );
        printf( "\n");
        ib++;
    }
    printf( "\n\n");

    char str_sysc[] = "abcdefghijkl";
    char str_ftc[] = "abcdefghijkl";
    int len_strc = strlen(str_sysc);
    int ic = 0;

    memmove(str_sysc+5, str_sysc+2, 5);
    ft_memmove(str_ftc+5, str_ftc+2, 5);

    while (ic < len_strc)
    {
        printf( "ft_memmove |%c| memmove |%c| ", str_ftc[ic], str_sysc[ic] );
        printf( "\n");
        ic++;
    }
}
