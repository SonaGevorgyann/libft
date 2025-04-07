/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:06:39 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 21:48:35 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	lit_size;
	size_t	big_size;

	i = 0;
	lit_size = ft_strlen(needle);
	if (lit_size == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	big_size = ft_strlen(haystack);
	while (i + lit_size <= len && i < big_size)
	{
		if (ft_strncmp(haystack + i, needle, lit_size) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    //const char *haystack = "hello world!";
    //const char *needle = "world!a";
	printf("%s\n", strnstr(((void *)0), "fake", 3));
	//printf("%s\n", ft_strnstr(((void *)0), "fake", 3));
	return (0);
}
*/