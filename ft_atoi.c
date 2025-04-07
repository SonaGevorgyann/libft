/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:54:59 by songevor          #+#    #+#             */
/*   Updated: 2024/02/09 20:47:31 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		res;
	int		sign;
	size_t	i;

	sign = 1;
	res = 0;
	i = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return (sign * res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%d\n", atoi("+---+12345"));
	printf("%d", ft_atoi("	+12345"));
    
    return 0;
}*/