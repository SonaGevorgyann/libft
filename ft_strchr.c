/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:49:22 by songevor          #+#    #+#             */
/*   Updated: 2024/02/11 21:22:57 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*d;

	d = (char *)s;
	i = 0;
	while (d[i] && d[i] != (char)c)
	{
		i++;
	}
	if (d[i] == (char)c)
		return (&d[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
const char *str = "Hello, world!";
    printf("%s", strchr(str, 'a'));
	printf("%s", ft_strchr(str, 'a'));
}*/
