/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:58:27 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/28 10:49:03 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*out;
	size_t	i;

	if (!str)
		return (NULL);
	if (!(out = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		out[i] = f(i, (char)str[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
