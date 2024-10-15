/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:29 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:29 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i <= n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>




int	main(void)
{
	char src[] = "Salut";
	char dest[20];
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	ft_memcpy(dest, src, 6);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	return (0);
}
*/