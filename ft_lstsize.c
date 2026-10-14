/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:48:51 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/27 15:03:14 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	cont;

	cont = 0;
	while (lst)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
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
   printf("%d\n",ft_lstsize(Nod));
}*/