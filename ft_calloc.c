/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:55:30 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/14 20:55:30 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void *ptr;
	int finalLen;

	finalLen = nmemb * size;
	if (nmemb != 0 && finalLen / nmemb != size)
		return (NULL);
	ptr = malloc(finalLen);

	if (!ptr)
		return (NULL);

	ft_bzero(ptr, finalLen);
	return (ptr);
}