/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:49:10 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 18:03:44 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*d;

	str = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	while (str[i] && i < n && str[i] == d[i])
		i++;
	if (i != n)
		return (str[i] - d[i]);
	return (0);
}
