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
	if (base[i] <= 1)
		return (0);
	while (base[i])
	{
		if (base[i]== 32 || (base[i]>= '\t' && base[i]<= '\r'))
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

void	clean_str(char	*dirty, char *base, char *clean)
{
	int	minus;

	minus = 1;
	while (*dirty == 32 || (*dirty >= '\t' && *dirty <= '\r'))
		dirty++;
	while (*dirty == '-' || *dirty == '+')
	{
		if (*dirty == '-')
			minus = -minus;
		dirty++;
	}
	if (minus < 0)
	{
		*clean = '-';
		clean++;
	}
	while (in_base(*dirty, base))
	{
		*clean = *dirty;
		clean++;
		dirty++;
	}
}

int	len_cleanstr(char	*dirty, char *base)
{
	int	minus;
	int	len;

	minus = 1;
	len = 0;
	while (*dirty == 32 || (*dirty >= '\t' && *dirty <= '\r'))
		dirty++;
	while (*dirty == '-' || *dirty == '+')
	{
		if (*dirty == '-')
			minus = -minus;
		dirty++;
	}
	if (minus < 0)
		len++;
	while (in_base(*dirty, base))
	{
		len++;
		dirty++;
	}
	printf("len = %d\n", len);
	return (len);
}

int ft_atoi_base(char *str, char *base)
{
	int	what_base;
	char	str_cleaned[len_cleanstr(str, base)];

	what_base = 0;
	while (base[what_base])
		what_base++;
	if (base_conditions(base))
	{
		clean_str(str, base, str_cleaned);
		printf("cleaned str = %s\n", str_cleaned);
	}
	return (0);
}
