/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:27 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:27 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>


int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello, World!";
	int result;

	result = ft_memcmp(s1, s2, 5);

	if (result == 0)
	{
		printf("Les 5 premiers caracteres des deux chaines sont identiques.\n");
	}
	else if (result > 0)
	{
		printf("Les premiers caracteres de s1 sont superieurs a ceux de s2.\n");
	}
	else
	{
		printf("Les premiers caractères de s1 sont inferieurs a ceux de s2.\n");
	}

	return (0);
}
*/