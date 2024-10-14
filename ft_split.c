/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:28:10 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 23:33:39 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countWord(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'));
			count++;	
		i++;
	}
	return (count);
}
static char *fillChar(const char *str, int start, int end)
{
	int i;
	char *res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	while(i < end)
	{
		res[i] = str[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
char	**ft_split(char const *s, char c)
{
	char **res;
	int i;
	int k;
	int j;

	k = 0;
	j = 0;
	i = 0;
	res = malloc(ft_countWord(s,c) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			fillChar(s, j, i);
			k++;
			j = i + 1;
		}
		i++;
	}
	return (res);
}