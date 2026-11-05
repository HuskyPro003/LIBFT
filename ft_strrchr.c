/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:48:25 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/05 11:27:43 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;
	char	*last;

	x = 0;
	last = NULL;
	while (s[x])
	{
		if (s[x] == (char)c)
			last = (char *)&s[x];
		x++;
	}
	if ((char)c == '\0')
		return ((char *)&s[x]);
	return (last);
}
