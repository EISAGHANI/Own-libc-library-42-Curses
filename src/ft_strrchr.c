/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:56 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/25 21:10:01 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = (int) ft_strlen(str);
	while (index >= 0)
	{
		if (str[index] == (unsigned char) c)
		{
			return ((char *)str + index);
		}
		index--;
	}
	return (NULL);
}


int main() {
   char str[] = "Hello, world!";
   char *ptr;

   ptr = ft_strrchr(str, 'o');

    printf("Last occurrence of 'o' found at position: %ld\n", ptr - str);

   return 0;
}
