/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:32:44 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/26 17:17:27 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = malloc(slen + 1);
	if (!str)
		return (NULL);
	while (i < slen)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	upper(unsigned int ind, char c)
{
	(void)ind;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(void)
{
	char arr[] = "mamon";
	printf("%s", ft_strmapi(arr, upper));
}*/