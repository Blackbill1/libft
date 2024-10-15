/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:30:12 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/15 22:46:37 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += 1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	res = malloc(len * sizeof(char) + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = len - 1;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	int n = 100;
	char *res = ft_itoa(n);
	printf("%s", res);
}
*/