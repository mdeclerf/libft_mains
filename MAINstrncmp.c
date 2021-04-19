#include "libft.h"
#include <stdio.h>



int main (void)
{
   char * str1 = "abcdefghij";
   char * str2 = "abcdefghij";
   printf ("TEST1ft : %d\n", ft_strncmp (str1, str2, 4));
   printf ("sys : %d\n", strncmp (str1, str2, 4));
   
   char * str3 = "abcefghijk";
   char * str4 = "abbcdefghi";
   printf ("TEST2ft : %d\n", ft_strncmp (str3, str4, 4));
   printf ("sys : %d\n", strncmp (str3, str4, 4));

   char * str5 = "abcefghijk";
   char * str6 = "abcdefghi99999k";
   printf ("TEST3ft : %d\n", ft_strncmp (str5, str6, 4));
   printf ("sys : %d\n", strncmp (str5, str6, 4));

   char * str7 = "";
   char * str8 = "abcdefgh";
   printf ("TEST4ft : %d\n", ft_strncmp (str7, str8, 4));
   printf ("sys : %d\n", strncmp (str7, str8, 4));

    char * str9 = "abcdefgh";
   char * str10 = "";
   printf ("TEST5ft : %d\n", ft_strncmp (str9, str10, 4));
   printf ("sys : %d\n", strncmp (str9, str10, 4));

   char * str11 = "";
   char * str12 = "";
   printf ("TEST6ft : %d\n", ft_strncmp (str11, str12, 4));
   printf ("sys : %d\n", strncmp (str11, str12, 4));
}
