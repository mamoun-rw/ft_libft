/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:04:19 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/29 13:03:59 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void f(void *content)
{
    char *str = content;
    str[0] = 'h';
    str[1] = 'i';
    str[2] = '\0';
}

int	main(void)
{
	char arr[] = "mamon";
	char ar[] = "alruwaidan";
	t_list *node = ft_lstnew(arr);
	t_list *nde = ft_lstnew(ar);
	ft_lstadd_front(&node, nde);
	ft_lstiter(node, f);
	printf("%s\n",(char*)node->content);
}*/