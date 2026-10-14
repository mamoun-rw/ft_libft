/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:34:13 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/30 16:05:59 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i > 0)
	{
		--i;
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
/*
int	main(void)
{
	char r[] = "ma";
	printf("%s\n", ft_strrchr(r,'a'));
	printf("%s\n", strrchr(r,'a'));
}*/