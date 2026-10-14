/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:46:18 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/29 12:02:08 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}
/*
void	del(void *lst)
{
	lst = NULL;
}

int	main(void)
{
	char arr[] = "mamon";
	char ar[] = "alruwaidan";
	char a[] = "fjsa";
	t_list *node = ft_lstnew(arr);
	t_list *nod = ft_lstnew(ar);
	t_list *nde = ft_lstnew(a);
	ft_lstadd_front(&node, nod);
	ft_lstadd_front(&node, nde);
	printf("%s\n", (unsigned char *)node->content);
	ft_lstclear(&node, del);
	printf("%s", (unsigned char *)node->content);
}*/