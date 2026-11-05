/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:33:01 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/03 14:54:17 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				x;

	x = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (x < n)
	{
		if (p1[x] != p2[x])
			return ((int)(p1[x] - p2[x]));
		x++;
	}
	return (0);
}
