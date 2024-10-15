/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:51 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:51 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		lensrc;

	lensrc = 0;
	i = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	if (size == 0)
		return (lensrc);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lensrc);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello, World!";
	char dst[0];

	int size = ft_strlcpy(dst, src, 0);

	// Afficher le résultat
	printf("Chaine copiee : %s\n", dst);
	printf("Longueur de la source : %d\n", size);
	return (0);
}
*/