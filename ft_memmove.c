/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:34 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:34 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Bonjour le monde";

	ft_memmove(str + 8, str, 7); // Le chevauchement est ici

	printf("Resultat: %s\n", str);
	return (0);
}
*/