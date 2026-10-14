/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:43:07 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/30 13:39:28 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	if (start >= n)
		return (ft_strdup(""));
	if (len > n - start)
		len = n - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char f[] = "mamon alruwaidan";
	printf("%s", ft_substr(f,6,6));
}*/