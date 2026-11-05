/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:45:12 by jesrodri          #+#    #+#             */
/*   Updated: 2026/10/28 11:21:06 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				x;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	origen[] = "hola";
	char	destino[5] = "xxxx";

	ft_memcpy(destino, origen, 2);
	printf("%s\n", destino);
	return(0);
}
*/