/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:23 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:23 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(ptr + i) == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char *result;
	char c = 'W';

	result = ft_memchr(str, c, sizeof(str));

	if (result != 0)
	{
		printf("Le caractere '%c' trouve a la position %ld.\n", c, result
			- str);
	}
	else
	{
		printf("Le caractère '%c' n'a pas été trouvé.\n", c);
	}

	return (0);
}
*/