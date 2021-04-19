char	*ft_itoa(int n);

#include <stdlib.h>
#include <stdio.h>
int main ()
{
    printf("is %s \n",ft_itoa(1234));
    printf("is %s \n",ft_itoa(455596));
    printf("is %s \n",ft_itoa(-2147483648));
    printf("is %s \n",ft_itoa(-12366));
    printf("is %s \n",ft_itoa(2147483647));
    printf("is %s \n",ft_itoa(0));
    printf("is %s \n",ft_itoa(-0));
}
