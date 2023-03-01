/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:28:22 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/22 16:28:23 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_len;

	i = 0;
	range_len = max - min;
	if (range_len < 1)
	{
		range = NULL;
		return (0);
	}
	range = malloc(sizeof(range) * (range_len));
	if (range)
	{
		while (i != range_len)
		{
			range[i] = (min + i);
			i++;
		}
		return (range_len);
	}
	return (-1);
}
