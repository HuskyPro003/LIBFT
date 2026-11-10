/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:03:05 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/10 15:44:27 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	x;
	size_t	count;

	x = 0;
	count = 0;
	while (s[x])
	{
		if (s[x] != c && (x == 0 || s[x - 1] == c))
			count++;
		x++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	x;

	x = 0;
	while (s[x] && s[x] != c)
		x++;
	return (x);
}

static void	free_all(char **res, size_t n)
{
	while (n > 0)
	{
		n--;
		free(res[n]);
	}
	free(res);
}

static char	**fill(char **res, char const *s, char c)
{
	size_t	x;
	size_t	len;

	x = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = word_len(s, c);
			res[x] = ft_substr(s, 0, len);
			if (!res[x])
			{
				free_all(res, x);
				return (NULL);
			}
			x++;
			s += len;
		}
		else
			s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	return (fill(res, s, c));
}
