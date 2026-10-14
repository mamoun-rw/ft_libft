/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:04:53 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/27 15:41:59 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
  char arr[] = "mamoun";
   char ar[] = "alruwaidan";
   char a[] = "aghkjgd;kl";
	t_list *Nod = ft_lstnew(arr);
   t_list *Node = ft_lstnew(ar);
   ft_lstadd_front(&Nod,Node);
   t_list *Nde = ft_lstnew(a);
   ft_lstadd_front(&Nod,Nde);
   t_list *pri = ft_lstlast(Nod);
   printf("%s",(unsigned char*)pri->content);
}*/