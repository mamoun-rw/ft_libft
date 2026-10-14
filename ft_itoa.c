/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:13:56 by maalruwa          #+#    #+#             */
/*   Updated: 2026/09/30 18:06:26 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ilen(int n)
{
	int	i;

	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	i = ilen(n);
	num = n;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--i] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	int num = -1234;
	printf("%s", ft_itoa(num));
}*/