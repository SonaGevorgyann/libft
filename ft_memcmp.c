/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:00:43 by songevor          #+#    #+#             */
/*   Updated: 2024/02/09 22:05:59 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	while (i < n && s[i] == d[i])
		i++;
	if (i != n)
		return (s[i] - d[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";

    int result1 = memcmp(str1, str2, strlen(str1));
    int result2 = memcmp(str1, str3, strlen(str1));

    printf("Comparison result between str1 and str2: %d\n", result1);
    printf("Comparison result between str1 and str3: %d\n", result2);
	printf("%d\n", ft_memcmp(str1, str2, strlen(str1)));
	printf("%d\n", ft_memcmp(str1, str3, strlen(str1)));

    return 0;
}
*/
