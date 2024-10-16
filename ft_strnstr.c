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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
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