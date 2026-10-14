/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:27:56 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/27 12:37:12 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s || !f)
		return ;
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	upper(unsigned int ind, char *c)
{
	(void)ind;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char arr[] = "mamonsdkjl";
	ft_striteri(arr, upper);
	printf("%s", arr);
}*/