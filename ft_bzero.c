/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:55:24 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 20:55:24 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *p = s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>




int	main(void)
{
	char str[10] = "Bonjour";
	printf("Avant bzero: %s\n", str);

	// Remplir les 10 premiers octets de 'str' avec des zéros
	ft_bzero(str, sizeof(str));

	printf("Apres bzero: %s\n", str); // Affiche une chaîne vide

	return (0);
}
*/