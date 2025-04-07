/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:00:54 by songevor          #+#    #+#             */
/*   Updated: 2024/02/16 22:01:10 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!new)
		return ;
	if (!*lst && new)
	{
		*lst = new;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

/*
#include <stdio.h>
void	print_list(t_list *node)
{
	while (node)
	{
		printf("%d\n", *(int *)(node->content));
		node = node->next;
	}
}

int	main()
{
	t_list	**head = NULL;
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;

	int	a = 1;
	int b = 2;
	int c = 3;
	node0 = ft_lstnew(&a);
	node1 = ft_lstnew(&b);
	node2 = ft_lstnew(&c);

	//ft_lstadd_back(head, node0);
	head = &node0;
	ft_lstadd_back(head, node1);
	ft_lstadd_back(head, node2);
	
	print_list(*head);
}
*/
