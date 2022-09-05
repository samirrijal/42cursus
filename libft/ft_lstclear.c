/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:46:28 by srijal            #+#    #+#             */
/*   Updated: 2022/09/03 22:49:03 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!(*lst) || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = next;
	}
}
