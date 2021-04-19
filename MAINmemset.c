

#include <memory.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	char str[] = "This is a test of the memset function";
	char str_b[] = "This is a test of the memset function";
	ft_memset( str, '*', 4 );
	printf( "is         %s\n", str );
	memset( str_b, '*', 4 );
	printf( "should be  %s\n", str_b );

	char strb[] = "This is a test of the memset function";
	char strb_b[] = "This is a test of the memset function";
	ft_memset( strb, '*', 0 );
	printf( "is         %s\n", strb );
	memset( strb_b, '*', 0 );
	printf( "should be  %s\n", strb_b );

	char a[] = "This is a test of the memset function";
	char a_b[] = "This is a test of the memset function";
	ft_memset( a, 77, 34 );
	printf( "is         %s\n", a );
	memset( a_b, 77, 34 );
	printf( "should be  %s\n", a_b );

}
