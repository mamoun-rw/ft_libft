/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:54:00 by maalruwa          #+#    #+#             */
/*   Updated: 2026/10/06 09:43:57 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (d);
}
/*
int	main(void)
{
	char r[] = "mamon";
	ft_memmove(r,r,5);
	printf("%s",r);


}*/
