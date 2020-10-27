/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:20:52 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/04 12:36:24 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (len > 0)
	{
		*(ptr++) = (unsigned char)c;
		len--;
	}
	return (s);
}
