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
	int		lendest;

	lendest = ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lendest + ft_strlen((char *)src) + 1);
}

/*
#include <stdio.h>
#include <string.h>







int	main(void)
{
	char src[] = "World!";
	char dst[] = "Hello, ";

	int size = ft_strlcat(dst, src, 7);

	printf("Chaine copiee : %s\n", dst);
	printf("Return : %d\n", size);
	return (0);
}
*/