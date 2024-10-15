/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:49 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:49 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	lensrc;

	lensrc = ft_strlen((char *)src);
	lendest = ft_strlen((char *)dest);
	i = lendest;
	j = 0;
	if (size <= lendest)
		return (size + lensrc);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "World!";
	char dst[] = "Hello, ";

	int size = ft_strlcat(dst, src, 13);

	printf("Chaine copiee : %s\n", dst);
	printf("Return : %d\n", size);
	return (0);
}
*/
