/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:43:26 by axcastil          #+#    #+#             */
/*   Updated: 2023/10/17 04:34:23 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*after;

	if (*lst == NULL)
		return ;
	while (*lst)
	{
		after = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = after;
	}
	*lst = 0;
}
