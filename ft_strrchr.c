/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:06:03 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:06:03 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int last;

	last = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last != 0)
		return ((char *)s + last);
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

	char *result = ft_strrchr(str, 'o');

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