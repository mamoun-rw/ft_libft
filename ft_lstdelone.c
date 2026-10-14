/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:06:47 by maalruwa          #+#    #+#             */
/*   Updated: 2026/10/01 17:52:38 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *lst)
{
	if(!lst)
	lst = NULL;
}
int	main(void)
{
	char arr[] = "mamon";
	t_list *node;
	node = ft_lstnew(arr);
	printf("%s\n",(unsigned char* )node->content);
	ft_lstdelone(node,del);
	printf("%s\n",(unsigned char*)node->content);
}*/
