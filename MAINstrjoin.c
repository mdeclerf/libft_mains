
#include <stdio.h>
#include "libft.h"
int main ()
{
  char *s1 = "le silence";
  char *s2 = "est d'or";
  char *s3 = ft_strjoin(s1,s2);
  size_t i = 0;
  while (i < ft_strlen(s3))
  {
      printf("|%c|", s3[i]);
      i++;
  }
	printf("\n\n");
	char *s1a = "";
  char *s2a = "est d'or";
  char *s3a = ft_strjoin(s1a,s2a);
  size_t ia = 0;
  while (ia < ft_strlen(s3a))
  {
      printf("|%c|", s3a[ia]);
      ia++;
  }
  	printf("\n\n");

  	char *s1b = "le silence";
  char *s2b = "";
  char *s3b = ft_strjoin(s1b,s2b);
  size_t ib = 0;
  while (ib < ft_strlen(s3b))
  {
      printf("|%c|", s3b[ib]);
      ib++;
  }
  	printf("\n\n");

	char *overlap = "abcdefghijklmnop";
	char *s1c = overlap + 3;
  char *s2c = overlap + 5;
  char *s3c = ft_strjoin(s1c,s2c);
  size_t ic = 0;
  while (ic < ft_strlen(s3c))
  {
      printf("|%c|", s3c[ic]);
      ic++;
  }



}
