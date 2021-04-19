#include <stdio.h>
#include <string.h>
#include "libft.h"
int main()
{
    printf(" int %ld void pointer %ld char %ld", sizeof(int),sizeof(void*), sizeof(char));
    printf( "\n\n");
    char str_sys[] = "abcdefghijkl";
    char dst_sys[] = "************";
    char str_ft[] = "abcdefghijkl";
    char dst_ft[] = "************";
    int len_str = ft_strlen(str_sys);
    int i = 0;

    memccpy(dst_sys, str_sys, 99, 5);
    ft_memccpy(dst_ft, str_ft, 99, 5);

    while (i < len_str)
    {
        printf( "ft_memccpy |%c| memccpy |%c| ", dst_ft[i], dst_sys[i] );
        printf( "\n");
        i++;
    }

    printf( "\n\n");
    char str_sysb[] = "abcdefghijkl";
    char dst_sysb[] = "************";
    char str_ftb[] = "abcdefghijkl";
    char dst_ftb[] = "************";
    int len_strb = ft_strlen(str_sys);
    int ib = 0;

    memccpy(dst_sysb, str_sysb, 120, 5);
    ft_memccpy(dst_ftb, str_ftb, 120 , 5);

    while (ib < len_strb)
    {
        printf( "ft_memccpy |%c| memccpy |%c| ", dst_ftb[ib], dst_sysb[ib] );
        printf( "\n");
        ib++;
    }
    printf( "\n\n");

   char str_sysc[] = "abcdefghijkl";
   char dst_sysc[] = "nonn";
   char str_ftc[] = "abcdefghijkl";
   char dst_ftc[] = "nonn";
   int len_strc = ft_strlen(str_sysc);
   int ic = 0;

   memccpy(dst_sysc, str_sysc, 157,4);
   ft_memccpy(dst_ftc, str_ftc, 157,4);

   while (ic < len_strc)
   {
       printf( "ft_memccpy |%c| memccpy |%c| ", dst_ftc[ic], dst_sysc[ic] );
       printf( "\n");
       ic++;
   }
}
