/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:05:42 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 21:05:42 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(ft_strlen((char *)s) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
