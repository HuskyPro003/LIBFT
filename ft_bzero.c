/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huskypro003 <huskypro003@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:29:43 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/18 13:12:11 by huskypro003      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <string.h>
#include <strings.h>
#include <stdio.h>
int	main(void)
{
	char	a[6];
	char	b[6];

	a[6] = "Hola!";
	b[6] = "Hola!";
	ft_bzero(a, 3);
	bzero(b, 3);
	if (memcmp(a, b, 6) == 0)
		printf("ok\n");
	else
		printf("error\n");
	return (0);
}
*/