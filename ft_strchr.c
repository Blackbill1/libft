/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:38 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:38 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}
/*
#include <stdio.h>



int	main(void)
{
	char str[] = "Hello, World!";
	char ch = 'o';

	char *result = ft_strchr(str, ch);

	if (result != 0)
	{
		printf("Le caractere '%c' trouve a la position : %ld\n", ch, result
			- str);
	}
	else
	{
		printf("Le caractere '%c' n'a pas ete trouve.\n", ch);
	}

	return (0);
}
*/