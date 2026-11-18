/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huskypro003 <huskypro003@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:25:17 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/18 11:28:20 by huskypro003      ###   ########.fr       */
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
	while (nptr[x] >= '0' && nptr[x] <= '9')
	{
		res = res * 10 + (nptr[x] - '0');
		x++;
	}
	return (res * sig);
}
/*
#include <stdio.h>
int	main()
{
	char	a[] = "-4";
	printf("%i\n", ft_atoi(a));
	return (0);
}
*/