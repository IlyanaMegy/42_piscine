/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:59:54 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/16 10:59:55 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	conditions(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		if (is_occured(base, (i + 1), base[i]))
			return (0);
		++i;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	what_base;

	what_base = 0;
	while (base[what_base])
		what_base++;
	if (conditions(base) && what_base > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putchar(base[-nbr / what_base]);
			ft_putchar(base[-nbr % what_base]);
		}
		else
		{
			ft_putchar(base[nbr / what_base]);
			ft_putchar(base[nbr % what_base]);
		}
	}
}
