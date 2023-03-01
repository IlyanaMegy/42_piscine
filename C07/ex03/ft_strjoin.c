/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:45:27 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/22 19:45:30 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, int at, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[at + i] = src[i];
		i++;
	}
	dest[at + i] = 0;
	return (dest);
}

int	len_strs(int size, char **strs, char *sep)
{
	int	i;
	int	res;
	int	empty;

	i = 0;
	res = 0;
	empty = 0;
	while (i < size)
	{
		res += len(strs[i]);
		if (!strs[i][0])
			empty++;
		i++;
	}
	res += (size - 1 - empty) * len(sep) + 1;
	return (res);
}

void	add_to_str(int size, char **strs, char *str, char *sep)
{
	int	i;
	int	at;

	i = 0;
	at = 0;
	while (i < size)
	{
		if (strs[i][0])
		{
			ft_strcat(str, at, strs[i]);
			at += len(strs[i]);
			if (i < (size - 1))
			{
				ft_strcat(str, at, sep);
				at += len(sep);
			}
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size > 0)
	{
		str = (char *)malloc((len_strs(size, strs, sep)) * sizeof(char));
		if (!str)
			return (NULL);
		add_to_str(size, strs, str, sep);
		str[len(str)] = '\0';
		return (str);
	}
	str = malloc(sizeof(char));
	*str = 0;
	return (str);
}
