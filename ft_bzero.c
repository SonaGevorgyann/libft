/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:31:55 by songevor          #+#    #+#             */
/*   Updated: 2024/02/10 21:17:22 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>

int main() {
    char buffer[10];

    // Using bzero to zero out the buffer
    bzero(buffer, 7);
int	i;
i = 0;
    // Print the contents of the buffer
    while (i < 7)
	{
        printf("%d ", buffer[i]);
		i++;
    }

    return 0;
}
*/
