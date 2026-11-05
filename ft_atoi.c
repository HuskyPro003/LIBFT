/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesrodri <jesrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:25:17 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/05 11:26:59 by jesrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	x;
	int	sig;
	int	res;

	x = 0;
	sig = 1;
	res = 0;
	while (nptr[x] == ' ' || (nptr[x] >= 9 && nptr[x] <= 13))
		x++;
	if (nptr[x] == '-' || nptr[x] == '+')
	{
		if (nptr[x] == '-')
			sig *= -1;
		x++;
	}
	while (nptr[x])
	{
		res = res * 10 + (nptr[x] - '0');
		x++;
	}
	return (res * sig);
}
