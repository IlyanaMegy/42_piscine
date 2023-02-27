/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:02:25 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/23 14:02:28 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	base_conditions(char *base)
{
	int	i;
	int	n;

	i = 0;
	while (base[i])
	{
		if (base[i] == 32 || (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		if (base[i] == 43 || base[i] == 45)
			return (0);
		n = i + 1;
		while (base[n])
		{
			if (base[n] == base[i])
				return (0);
			++n;
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	in_base(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	get_int_of_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

char	*rev(char *str, int len)
{
	int i;
	char tmp;

	i = 0;
	if (str[i] == '-')
		i++;
	len -= 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}