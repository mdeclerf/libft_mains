/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAINisdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:59:33 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/16 10:04:34 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int main ()
{
    printf("54 is 		%d\n", ft_isdigit(54));
    printf("should be 	%d\n\n", isdigit(54));
    printf("-1 is 		%d\n", ft_isdigit(-1));
    printf("should be 	%d\n\n", isdigit(-1));
	printf("'R' is 		%d\n", ft_isdigit('R'));
    printf("should be 	%d\n\n", isdigit('R'));
	printf("'2' is 		%d\n", ft_isdigit('2'));
    printf("should be 	%d\n\n", isdigit('2'));
}
