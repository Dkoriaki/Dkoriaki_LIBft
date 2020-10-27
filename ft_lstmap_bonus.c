/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 10:27:13 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/18 18:38:25 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*result;
	t_list	*start;

	if (!lst)
		return (NULL);
	if (!(result = ft_lstnew(f(lst->content))))
		return (NULL);
	start = result;
	while (lst->next)
	{
		if (!(result->next = ft_lstnew(f(lst->next->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		lst = lst->next;
		result = result->next;
	}
	return (start);
}
