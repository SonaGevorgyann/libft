/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:30:56 by songevor          #+#    #+#             */
/*   Updated: 2024/02/13 14:31:29 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	funct(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*fill(char *as, int i, int n)
{
	as[i] = '\0';
	if (n < 0)
	{
		n *= -1;
		as[0] = '-';
	}
	while (n && i > 0)
	{
		as[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (as);
}

char	*ft_itoa(int n)
{
	char	*as;
	size_t	i;

	if (n == 0)
		as = ft_strdup("0");
	else if (n == -2147483648)
		as = ft_strdup("-2147483648");
	else
	{
		i = funct(n);
		as = (char *)malloc(i + 1);
		if (as == NULL)
			return (NULL);
		as = fill(as, i, n);
	}
	return (as);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	 printf("%s\n", ft_itoa(-2147483648));
	 printf("%s\n", ft_itoa(-623));
	 printf("%s\n", ft_itoa(5));
	 printf("%s\n", ft_itoa(-0));
	printf("%lu", funct(-2147483648));
	return (0);
}
*/