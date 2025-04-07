/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:16:12 by songevor          #+#    #+#             */
/*   Updated: 2024/02/13 21:16:28 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_of_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
		}
		j++;
	}
	if (s[ft_strlen(s) - 1] == c)
		j--;
	return (j);
}

void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
}

void	fill_matrix(char **matrix, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i] && s[i] != c)
			{
				len++;
				i++;
			}
			matrix[j] = ft_substr((s + i) - len, 0, len);
			if (matrix[j] == NULL)
				ft_free(matrix);
			j++;
		}
		else
			i++;
	}
	matrix[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	k;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (*s == '\0')
	{
		matrix = (char **)malloc(sizeof(char *));
		matrix[0] = NULL;
		return (matrix);
	}
	k = count_of_words(s, c);
	i = 0;
	matrix = (char **)malloc((k + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	fill_matrix(matrix, s, c);
	return (matrix);
}

// #include <stdio.h>
// int main()
// {
// char	**tabstr;
// 	if (!(tabstr = ft_split("", 'z')))
// 			printf("NULL");
// 		else
// 			if (!tabstr[0])
// 				printf("ok\n");
// 	return (0);
// }
