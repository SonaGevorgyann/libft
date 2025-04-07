/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:45 by songevor          #+#    #+#             */
/*   Updated: 2024/02/09 18:27:36 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
	{
		i++;
	}
	if (i != n)
		return ((void *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
    printf("%s", memchr(str, 'a', strlen(str)));
	printf("%s", ft_memchr(str, 'a', strlen(str)));
}*/
