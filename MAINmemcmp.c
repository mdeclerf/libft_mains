

#include <stdio.h>
#include "libft.h"

int main ()
{
    printf("ft : %d  sys : %d",ft_memcmp("tout ce qui brille n'est pas d'or", "tout ce qui brille n'est paz d'or", 45),memcmp("tout ce qui brille n'est pas d,or", "tout ce qui brille n'est paz d'or", 45));
    printf("\n");
    printf("ft : %d  sys : %d",ft_memcmp("tout ce qui brille n'est pas d,or", "tout ce qui brille n'est pas d,ore", 45),memcmp("tout ce qui brille n'est pas d,or", "tout ce qui brille n'est pas d,ore", 45));
    printf("\n");
    printf("ft : %d  sys : %d",ft_memcmp("la parole est d'argent", "la parole est plop", 8),memcmp("la parole est d'argent", "la parole est plop", 8));
    printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("yolo", "", 15),memcmp("yolo", "", 15));
    printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("", "jesuisunephrase", 15),memcmp("", "jesuisunephrase", 15));
    printf("\n");
	printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("jesuisunephrase", "", 15),memcmp("jesuisunephrase", "", 15));
    printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("jesuisunephrase", "jesuisunephrase", 0),memcmp("jesuisunephrase", "jesuisunephrase", 0));
    printf("\n");

}

