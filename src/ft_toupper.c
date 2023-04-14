/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:39:10 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/25 20:55:06 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int ft_toupper(int c)
{
	if ((c > 96 && c < 123))
	{
		return (c - 32);
	}
	return (c);
}

// int main() {
//     int ch = 'a';
//     int upper_ch;

//     if (isascii(ch)) {
//         upper_ch = ft_toupper(ch);
//         printf("The uppercase equivalent of %c is %c.\n", ch, upper_ch);
//     }
//     else {
//         printf("%c is not a valid character.\n", ch);
//     }

//     return 0;
// }
