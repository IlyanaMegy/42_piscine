/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:04:19 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/23 14:04:21 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		get_int_of_base(char c, char *base);
char	*rev(char *str, int len);
int		base_conditions(char *base);
int		in_base(char c, char *base);

int	to_int(char *str, char *base, int l_base)
{
	int	res;

	res = 0;
	while (*str && in_base(*str, base))
	{
		res *= l_base;
		res += get_int_of_base(*str, base);
		str++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	base_len;

	res = 0;
	sign = 1;
	if (base_conditions(base))
	{
		while (*str == 32 || (*str >= '\t' && *str <= '\r'))
			++str;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		base_len = 0;
		while (base[base_len])
			base_len++;
		res = to_int(str, base, base_len);
	}
	return (res * sign);
}

int	try(int nbr, char *base)
{
	int		l_base;
	long	n;
	int		i;

	i = 0;
	l_base = 0;
	n = nbr;
	while (base[l_base])
		l_base++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= l_base)
	{
		n = n / l_base;
		i++;
	}
	if (n < l_base)
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, char *res)
{
	int		l_base;
	int		i;
	long	n;

	l_base = 0;
	n = nbr;
	i = 0;
	while (base[l_base])
		l_base++;
	if (n < 0)
	{
		res[i] = '-';
		i++;
		n = -n;
	}
	while (n >= l_base)
	{
		res[i] = base[n % l_base];
		n = n / l_base;
		i++;
	}
	if (n < l_base)
		res[i] = base[n];
	res[i + 1] = 0;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nbr_converted;
	int		len_nbr_converted;

	if (!base_conditions(base_from) || !base_conditions(base_to))
		return (NULL);
	if (ft_atoi_base(nbr, base_from))
	{
		len_nbr_converted = try(ft_atoi_base(nbr, base_from), base_to);
		nbr_converted = (char *)malloc((len_nbr_converted) * sizeof(char));
		if (!nbr_converted)
			return (NULL);
		ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, nbr_converted);
		return (rev(nbr_converted, len_nbr_converted));
	}
	return (NULL);
}
