/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:20:31 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/27 14:43:00 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nui;
	char			c;

	if (nb < 0)
	{
		nui = -nb;
		write(fd, "-", 1);
	}
	else
		nui = nb;
	if (nui > 9)
		ft_putnbr_fd((nui / 10), fd);
	c = (nui % 10) + '0';
	write(fd, &c, 1);
}
