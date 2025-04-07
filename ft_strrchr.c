/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:24:06 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 21:45:56 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	size_t	i;

	d = (char *)s;
	i = ft_strlen(d);
	while (i != 0)
	{
		if (d[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if (d[i] == (char)c)
		return (d + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
    printf("%s", strrchr(str, 'a'));
	printf("%s", ft_strrchr(str, 'a'));
}*/
