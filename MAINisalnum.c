/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAINisalnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:58:21 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/16 10:04:54 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main ()
{
    printf("54 	is 		%d\n", ft_isalnum(54));
    printf("	should be 	%d\n\n", isalnum(54));
    printf("-1 	is 		%d\n", ft_isalnum(-1));
    printf("	should be 	%d\n\n", isalnum(-1));
	printf("b 	is 		%d\n", ft_isalnum('b'));
    printf("	should be 	%d\n\n", isalnum('b'));
	printf("321 is 		%d\n", ft_isalnum(321));
    printf("	should be 	%d\n\n", isalnum(321));
	printf("@ 	is 		%d\n", ft_isalnum('@'));
    printf("	should be 	%d\n\n", isalnum('@'));
}
