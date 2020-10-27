/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:07:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/07 13:43:00 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;

	ptr_dest = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (!len || dst == src)
		return (dst);
	while (len > 0)
	{
		*(ptr_dest++) = *(ptr_src++);
		len--;
	}
	return (dst);
}
