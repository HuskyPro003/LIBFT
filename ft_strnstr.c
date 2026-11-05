/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:44:38 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/05 14:55:50 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		x = 0;
		while ((x + i) < len && big[x + i] == little[x] && little[x])
			x++;
		if (!little[x])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
