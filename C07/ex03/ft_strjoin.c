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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

int	len_strs(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += len(strs[i]);
		i++;
	}
	res += (size - 1) * len(sep) + 1;
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		f;
	char	*str;

	if (size > 0)
	{
		str = (char *)malloc((len_strs(size, strs, sep)) * sizeof(char));
		if (!str)
			return (NULL);
		i = 0;
		f = 0;
		while (i < size)
		{
			ft_strcat(str, strs[i]);
			if (i < (size - 1))
				ft_strcat(str, sep);
			i++;
		}
		str[f] = '\0';
	}
	str = malloc(sizeof(char));
	*str = 0;
	return (str);
}
