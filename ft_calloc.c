/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:11:22 by maalruwa          #+#    #+#             */
/*   Updated: 2026/10/11 09:52:01 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size != 0 && nmemb > ((size_t)-1 / size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
/*
int	main(void)
{
	int i = 0;
	int *p = ft_calloc(5, sizeof(int));
	while (i < 5)
	{
		printf("%d", p[i]);
		i++;
	}
    free(p);
}*/