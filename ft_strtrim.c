/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:45:27 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/27 14:29:58 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isincharset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_totrim(char const *str, char const *set, int isstart)
{
	int	i;
	int	out;

	if (isstart)
		i = 0;
	else
		i = ft_strlen(str) - 1;
	out = 0;
	while (ft_isincharset(str[i], set) && ((str[i] && isstart)
	|| (i != 0 && !isstart)))
	{
		out++;
		if (isstart)
			i++;
		else
			i--;
	}
	return (out);
}

static int	ft_sizeintrim(char const *str, char const *set)
{
	int	out;

	out = ft_strlen(str);
	out -= ft_totrim(str, set, 1);
	out -= ft_totrim(str, set, 0);
	return (out);
}

char		*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	char	*out;
	int		size;
	int		i;

	if (!str || !set)
		return (NULL);
	size = sizeof(char) * ft_sizeintrim(str, set) + 1;
	if (size < 0)
		return (ft_strdup(""));
	if (!(out = (char *)malloc(size)))
		return (NULL);
	start = ft_totrim(str, set, 1);
	end = ft_strlen(str) - ft_totrim(str, set, 0);
	i = 0;
	while (start < end)
		out[i++] = str[start++];
	out[i] = '\0';
	return (out);
}
