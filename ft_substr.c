/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:53:46 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/27 14:24:27 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	result_l;

	if (!str)
		return (NULL);
	if (ft_strlen(str) - start > len)
		result_l = len;
	else
		result_l = ft_strlen(str) - start;
	if (start > ft_strlen(str))
		result_l = 0;
	if (!(result = (char *)malloc(sizeof(char) * (result_l + 1))))
		return (NULL);
	i = 0;
	while (i < result_l)
		result[i++] = str[start++];
	result[i] = '\0';
	return (result);
}
