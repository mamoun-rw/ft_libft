/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:33:40 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/29 14:45:24 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	end;
	size_t	i;
	char	*ptr;

	i = 0;
	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	end = ft_strlen(s1);
	while (end > first && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = malloc((end - first) + 1);
	if (ptr == NULL)
		return (NULL);
	while (first < end)
	{
		ptr[i] = s1[first];
		i++;
		first++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char s1[] = "3333ammmm33333";
	char    *set = "33";
	printf("%s", ft_strtrim(s1, set));
}*/
