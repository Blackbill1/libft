/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:52:41 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/15 22:04:39 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	k = 0;
	i = 0;
	j = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	if (j - i + 1 <= 0)
	{
		return (ft_calloc(1, 1));
	}
	res = malloc((j - i + 2) * sizeof(char));
	if (!res)
		return (NULL);
	while (i <= j)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "**Bonjour**";
	char *set = "*";
	char *res = ft_strtrim(str, set);
	printf("%s", res);
}
*/