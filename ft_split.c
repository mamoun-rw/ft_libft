/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalruwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:52:49 by maalruwa          #+#    #+#             */
/*   Updated: 2026/10/06 13:50:02 by maalruwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **arr, int n)
{
	int	i;

	i = 0;
	while (n > i)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_split(char **arr, char const *s, char c)
{
	int	i;
	int	start;
	int	n;

	i = 0;
	start = -1;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				arr[n] = word_dup(s, start, i);
			else
				arr[n] = word_dup(s, start, i + 1);
			if (!arr[n])
				return (n);
			n++;
			start = -1;
		}
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		n;

	arr = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!arr)
		return (NULL);
	n = fill_split(arr, s, c);
	if (n != count_word(s, c))
	{
		free_split(arr, n);
		return (NULL);
	}
	arr[n] = NULL;
	return (arr);
}
