/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:29:55 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/24 18:02:53 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	s = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (s);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s);
}
/*int	main(void)
{
	char r[] = "sfdja";
	char d[] = "mam";
	printf("%zu\n", ft_strlcpy(r, d, 4));
	printf("%s\n", r);
}*/