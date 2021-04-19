#include "libft.h"
int main ()
{
	ft_putnbr_fd(0, 1);
	write(1,"\n",1);
	ft_putnbr_fd(1234, 2);
	write(1,"\n",1);
	ft_putnbr_fd(+2147483647, 0);
	write(1,"\n",1);
	ft_putnbr_fd(-2147483648, 1);
	write(1,"\n",1);
	ft_putnbr_fd(-2147483648, 123);
}