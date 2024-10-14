/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:06:00 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:06:00 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	int j;
	int lenS;
	lenS = ft_strlen((char *)little);

	i = 0;
	j = 0;
	while (i < len)
	{
		if (big[i] == little[0])
		{
			while (j < lenS)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
		}

		if (j == lenS)
			return ((char *)(big + i));
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char search[] = "World";
	char *result;

	result = strnstr(str, search, 10);

	if (result != 0)
	{
		printf("Sous-chaine trouvee a la position : %ld\n", result - str);
	}
	else
	{
		printf("Sous-chaine non trouvee.\n");
	}

	return (0);
}
*/