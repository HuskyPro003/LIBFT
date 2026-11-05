/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:19:36 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/02 11:51:55 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*int	main(void) 
{
	char	*r;

	r = ft_strtrim("  hola mundo  ", " ");
	printf("[%s]\n", r);
	free(r);
	r = ft_strtrim("xxhixyx", "xy");
	printf("[%s]\n", r);
	free(r);
	r = ft_strtrim("xxx", "x");
	printf("[%s]\n", r);
	free(r);
	r = ft_strtrim("hola", "");
	printf("[%s]\n", r);
	free(r);
	return (0);
}
*/