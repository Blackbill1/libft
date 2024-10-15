/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:06:06 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/15 23:13:16 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*res;
	size_t			reallen;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (ft_calloc(1, 1));
	reallen = ft_strlen((char *)s) - start;
	if (len > reallen)
		len = reallen;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = start;
	while (j < len && s[i] != '\0')
	{
		res[j] = s[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*s2;

	s = "1234";
	s2 = ft_substr(s, 10, 10);
	printf("s2 vaut %s", s2);
}
*/