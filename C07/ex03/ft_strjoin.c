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
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	simple_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src, int f)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[f] = src[i];
		++i;
		f++;
	}
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
		res += simple_len(strs[i]);
		i++;
	}
	i = 0;
	while (i < (size - 1))
	{
		res += simple_len(sep);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		f;
	char	*final_str;

	if (size == 0)
	{
		final_str = '\0';
		return (final_str);
	}
	final_str = (char *)malloc((len_strs(size, strs, sep)) * sizeof(char) + 1);
	if (!final_str)
		return (NULL);
	i = 0;
	f = 0;
	while (i < size)
	{
		ft_strcat(final_str, strs[i], f);
		f += simple_len(strs[i]);
		if (i < (size - 1))
			ft_strcat(final_str, sep, f);
		f += simple_len(sep);
		i++;
	}
	final_str[f] = '\0';
	return (final_str);
}
