/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:59:23 by jesrodri          #+#    #+#             */
/*   Updated: 2026/10/30 18:06:17 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				x;

	ptr = (const unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (ptr[x] == (unsigned char)c)
			return ((void *)&ptr[x]);
		x++;
	}
	return (NULL);
}
