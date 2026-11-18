/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huskypro003 <huskypro003@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:31:04 by jesrodri          #+#    #+#             */
/*   Updated: 2026/11/18 13:12:27 by huskypro003      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
	int	*a;
	int	*b;

	a = ft_calloc(5, sizeof(int));
	b = calloc(5, sizeof(int));
	if (!a || !b)
		return (1);
	if (ft_memcmp(a, b, 5 * sizeof(int)) == 0)
		printf("ok\n");
	else
		printf("error\n");
	free(a);
	free(b);
	return (0);
}
*/