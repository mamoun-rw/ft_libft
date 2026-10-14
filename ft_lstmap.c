/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:05:16 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/29 13:45:22 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
/*
void	*f(void *content)
{
	char	*str;

	str = content;
	str[0] = 'h';
	str[1] = 'i';
	str[2] = '\0';
	return(str);
}

void	del(void *lst)
{
	lst = NULL;
}
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
   t_list *pri = ft_lstmap(Nod,f,del);
   while (pri)
   {
		printf("%s\n",(unsigned char*)pri->content);
		pri = pri->next;
   }
}*/