/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAINisprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:59:56 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/16 10:04:30 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int main ()
{
    printf("54 is 		%d\n", ft_isprint(54));
    printf("should be 	%d\n\n", isprint(54));
    printf("_1 is 		%d\n", ft_isprint(-1));
    printf("should be 	%d\n\n", isprint(-1));
	printf("' ' is 		%d\n", ft_isprint(' '));
    printf("should be 	%d\n\n", isprint(' '));
	printf("backslash 0 is 		%d\n", ft_isprint(0));
    printf("should be 	%d\n\n", isprint(0));
	printf("'\n' is 		%d\n", ft_isprint('\n'));
    printf("should be 	%d\n\n", isprint('\n'));
	printf("'#' is 		%d\n", ft_isprint('#'));
    printf("should be 	%d\n\n", isprint('#'));
}
