/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:37:34 by dkoriaki          #+#    #+#             */
/*   Updated: 2019/11/27 14:34:08 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_strfree(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return ((void *)0);
}

static int		ft_nbwrds(char const *s, char c)
{
	int	i;
	int	j;

	if (!s)
		return (-1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int		w(char const *s, int i, char c)
{
	while (s[i] != c && s[i])
		i++;
	return (i + 1);
}

char			**ft_split(char const *str, char c)
{
	char	**out;
	int		i[3];

	if ((ft_nbwrds(str, c) == -1)
		|| !(out = (char **)malloc(sizeof(char *) * (ft_nbwrds(str, c) + 1))))
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (str[i[0]])
	{
		if (str[i[0]] != c)
		{
			if (!(out[i[1]] = (char *)malloc(sizeof(char) * w(str, i[0], c))))
				return (ft_strfree(out));
			i[2] = 0;
			while (str[i[0]] != c && str[i[0]])
				out[i[1]][i[2]++] = str[i[0]++];
			out[i[1]][i[2]] = '\0';
			i[1]++;
		}
		else
			i[0]++;
	}
	out[i[1]] = NULL;
	return (out);
}
