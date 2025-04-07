/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:06:08 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 21:26:03 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size > 65535 || count > 65535)
		return (0);
	s = (void *)malloc(count * size);
	if (s == 0)
		return (0);
	ft_bzero(s, (count * size));
	return (s);
}
