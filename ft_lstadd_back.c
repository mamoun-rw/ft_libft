/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:19:05 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/29 11:05:36 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = ft_lstlast(*lst);
	list->next = new;
}
/*
int	main(void)
{
	char arr[] = "mamon";
	t_list *node = ft_lstnew(arr);
	t_list *nde = NULL;
	ft_lstadd_back(&nde, node);
	printf("%s", (unsigned char *)nde->content);
}*/