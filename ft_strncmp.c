/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:57 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:57 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>




int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Helicopter";

	int result = ft_strncmp(str1, str2, 5);

	if (result == 0)
	{
		printf("Les premieres 3 lettres des chaines sont identiques.\n");
	}
	else if (result > 0)
	{
		printf("'%s' est lexicographiquement plus grand que '%s'.\n", str1,
			str2);
	}
	else
	{
		printf("'%s' est lexicographiquement plus petit que '%s'.\n", str1,
			str2);
	}

	return (0);
}
*/