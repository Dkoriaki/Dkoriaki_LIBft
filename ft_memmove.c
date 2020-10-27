/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:32:43 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/07 13:52:55 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr_dst;
	unsigned char *ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (!len || src == dst)
		return (dst);
	if (ptr_src < ptr_dst)
		while (len--)
			ptr_dst[len] = ptr_src[len];
	else
		while (len--)
			*(ptr_dst++) = *(ptr_src++);
	return (dst);
}
