/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huskypro003 <huskypro003@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:26:45 by huskypro003       #+#    #+#             */
/*   Updated: 2026/11/18 13:09:14 by huskypro003      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	f_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n && s1[x] && s1[x] == s2[x])
		x++;
	if (x == n)
		return (0);
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}

int	main(void)
{
	printf("%i\n", f_strncmp("Hola", "Hola", 0));
	return (0);
}
