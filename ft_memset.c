/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:10:05 by songevor          #+#    #+#             */
/*   Updated: 2024/02/01 21:33:31 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*m;
	size_t			i;

	m = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		m[i] = c;
		i++;
	}
	return (b);
}
