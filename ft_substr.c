/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:06:06 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:06:06 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	int				j;
	char			*res;

	j = 0;
	res = malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	i = start;
	while (i < len && s[i] != '\0')
	{
		res[j] = s[i];
		j++;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*s2;

	s = "Hello World";
	s2 = ft_substr(s, 0, 5);
	printf("s2 vaut %s", s2);
}
*/