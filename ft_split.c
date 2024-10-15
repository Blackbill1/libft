/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:28:10 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/15 14:02:07 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*fillchar(const char *str, int start, int end)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	while (i < end - start)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**mod;
	char	**res;
	int		i;
	int		index;

	index = 0;
	i = 0;
	res = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	mod = res;
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (i != index)
				*res++ = fillchar(s, index, i);
			index = i + 1;
		}
		i++;
	}
	if (i != index)
		*res++ = fillchar(s, index, i);
	*res = NULL;
	return (mod);
}
/*
#include <stdio.h>
int main(void)
{
	int i;
	char **s;
	char c;

	c = 'l';
	s = ft_split("      j'adore les    oisea u  x", c);
	i = 0;
	while (s[i])
	{
		printf("%s|", s[i]);
		i++;
	}
	return (0);
}
*/
