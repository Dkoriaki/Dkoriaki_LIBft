/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:24:44 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/18 18:40:53 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*explor;
	t_list	*next;

	if (!lst || !del)
		return ;
	explor = *lst;
	while (explor != NULL)
	{
		next = explor->next;
		del(explor->content);
		free(explor);
		explor = next;
	}
	*lst = NULL;
}
