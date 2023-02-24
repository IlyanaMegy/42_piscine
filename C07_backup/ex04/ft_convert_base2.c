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


int	is_occured(char *str, int n, char c)
{
	while (str[n])
	{
		if (str[n] == c)
			return (1);
		++n;
	}
	return (0);
}

int	base_conditions(char *base)
{
	int	i;

	i = 0;
	if (base[i] <= 1)
		return (0);
	while (base[i])
	{
		if (base[i]== 32 || (base[i]>= '\t' && base[i]<= '\r'))
			return (0);
		if (base[i] == 43 || base[i] == 45)
			return (0);
		if (is_occured(base, (i + 1), base[i]))
			return (0);
		++i;
	}
	return (1);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
}