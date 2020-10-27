/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:45:10 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/27 14:37:10 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nb)
{
	unsigned int	nui;
	int				i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nui = -nb;
		i++;
	}
	else
		nui = nb;
	while (nui)
	{
		nui /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nb)
{
	unsigned int	nui;
	char			*out;
	int				i;

	if (!(out = (char *)malloc(sizeof(char) * ft_nbrlen(nb) + 1)))
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		nui = -nb;
		out[i++] = '-';
	}
	else
		nui = nb;
	i = ft_nbrlen(nb) - 1;
	while (nui)
	{
		out[i--] = (nui % 10) + '0';
		nui /= 10;
	}
	if (nb == 0)
		out[i] = '0';
	out[ft_nbrlen(nb)] = '\0';
	return (out);
}
