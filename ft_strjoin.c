/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:20:00 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/24 18:02:20 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	char	*ptr;

	i = 0;
	n = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
		ptr[n++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
	{
		ptr[n] = s2[i];
		i++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char s1[] = "mamon";
	char s2[] = " mamon";
	printf("%s", ft_strjoin(s1, s2));
}*/