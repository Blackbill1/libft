/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 02:55:20 by tle-dref          #+#    #+#             */
/*   Updated: 2024/10/16 04:20:29 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	head = NULL;
	while (lst)
	{
		current = ft_lstnew(NULL);
		if (!current)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		current->content = f(lst->content);
		ft_lstadd_back(&head, current);
		lst = lst->next;
	}
	return (head);
}
