/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:40:21 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/16 17:40:24 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	base_conditions(char *base)
{
	int	i;
	int	n;

	i = 0;
	if (*base <= 1)
		return (0);
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

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	minus;
	int	j;

	res = 0;
	if (base_conditions(base))
	{
		minus = 1;
		while (*str == 32 || (*str >= '\t' && *str <= '\r'))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				minus = -minus;
			str++;
		}
		j = 0;
		while (in_base(*str, base))
		{
			while (base[j] != *str)
			{
				printf("j = %d, %c = %c\n", j, base[j], *str);
				j++;
			}
			// printf("res = %d %c %c\n", j,base[j], *str);
			res = res * 10 + (j);
			j = 0;
			// printf("res = %d\n", j);
			str++;
		}
		if (minus < 0)
			res = -res;
	}
	return (res);
}
