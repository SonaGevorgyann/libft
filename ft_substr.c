/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:35:47 by songevor          #+#    #+#             */
/*   Updated: 2024/02/12 19:49:09 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		str = (char *)malloc(ft_strlen(s) - start + 1);
	else
		str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
 printf("%s\n", substr("Hello world!", 7, 6));
 printf("%s\n", ft_substr("Hello world!", 7, 6));
    
    return 0;
}
*/
