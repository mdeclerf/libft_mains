/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAINisalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:58:54 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/16 10:04:59 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main ()
{
    printf("54 		is 		%d\n", ft_isalpha(54));
    printf("		should be 	%d\n\n", isalpha(54));
    printf("B 		is 		%d\n", ft_isalpha('B'));
    printf("		should be 	%d\n\n", isalpha('B'));
	printf("b 		is 		%d\n", ft_isalpha('b'));
    printf("		should be 	%d\n\n", isalpha('b'));
	printf("321 	is 		%d\n", ft_isalpha(321));
    printf("		should be 	%d\n\n", isalpha(321));
	printf("@ 		is 		%d\n", ft_isalpha('@'));
    printf("		should be 	%d\n\n", isalpha('@'));
}

