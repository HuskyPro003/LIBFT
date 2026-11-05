/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:43:53 by jesrodri          #+#    #+#             */
/*   Updated: 2026/10/28 14:54:04 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	if ((char)c == '\0')
		return ((char *) &s[x]);
	return (NULL);
}
