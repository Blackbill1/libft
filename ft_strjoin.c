/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:45 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/15 23:01:32 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*boucle(size_t lens1, size_t lens2, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < lens1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < lens2)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	res = boucle(lens1, lens2, s1, s2);
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	char *s1 = "hello";
	char *s2 = " world";
	char *res = ft_strjoin(s1, s2);
	printf("%s",res);
	return 0;
}
*/
