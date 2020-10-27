/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:18:13 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/14 11:15:28 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	if (!new)
		return ;
	begin = *alst;
	if (begin)
	{
		while (begin->next != NULL)
			begin = begin->next;
		begin->next = new;
	}
	if (!*alst)
		*alst = new;
	new->next = NULL;
}
