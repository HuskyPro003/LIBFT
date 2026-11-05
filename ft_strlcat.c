/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:02:08 by jesrodri          #+#    #+#             */
/*   Updated: 2026/10/28 14:03:38 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	d_len = i;
	s_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	if (size <= d_len)
		return (size + s_len);
	j = 0;
	while (src[j] != '\0' && (d_len + j) < (size - 1))
	{
		dst[d_len + j] = src[j];
		j++;
	}
	dst[d_len + j] = '\0';
	return (d_len + s_len);
}
