/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:05:07 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 21:40:33 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 17

int main() {
    char src[] = "Hello";
    char dest[BUFFER_SIZE] = "aaaaaaaaa";

    // Copy src to dest using strlcpy
    printf("%zu\n", strlcpy(dest, src, sizeof(dest)));
	printf("%zu\n", ft_strlcpy(dest, src, sizeof(dest)));
    printf("Copied string: %s\n", dest);
    return 0;
}
*/