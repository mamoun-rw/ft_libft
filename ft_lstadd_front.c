/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:34:31 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/27 14:47:19 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
   char arr[] = "mamoun";
   char ar[] = "alruwaidan";
	t_list *Nod = ft_lstnew(arr);
   t_list *Node = ft_lstnew(ar);
   ft_lstadd_front(&Nod,Node);
   printf("%s\n",(unsigned char *)Nod->content);
   Nod = Nod->next;
   printf("%s\n",(unsigned char *)Nod->content);

}*/