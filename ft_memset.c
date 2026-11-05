/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:25:54 by jesrodri          #+#    #+#             */
/*   Updated: 2026/10/27 12:26:19 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			x;

	p = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		p[x] = c;
		x++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	a[10] = "987654321";
// 	char	b[10] = "123456789";

// 	ft_memset(a, 'x', 0);
// 	memset(b, '0', 5);
// 	printf("%s\n%s\n", a, b);
// 	return (0);
// }
