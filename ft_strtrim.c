/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:52:41 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 22:29:56 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	res = malloc((j - i) * sizeof(char));
	while (i <= j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
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