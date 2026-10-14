/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:04:19 by maalruwa          #+#    #+#             */
/*   Updated: 2026/10/04 13:26:27 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*arr;

	i = 0;
	while (src[i])
		i++;
	arr = malloc(i + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
int	main(void)
{
	char r[] = "DSIJFK";
	char *i = ft_strdup(r);
	printf("%s", i);
}*/
