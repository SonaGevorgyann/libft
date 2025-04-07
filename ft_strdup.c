/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:51:22 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 21:20:33 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	s2 = (char *)malloc(i + 1);
	if (s2 == NULL)
		return (NULL);
	while (s1[j])
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char *original = "Hello, world!";
	printf("%s", strdup(original));
	printf("%s", ft_strdup(original));
}*/
