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

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	str_len;
	int	i;

	str_len = max - min;
	ptr = '\0';
	if (min >= max)
		return (ptr);
	ptr = malloc((str_len) * sizeof(int) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		ptr[i] = (min + i);
		i++;
	}
	return (ptr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_len;

	range_len = max - min;
	if (range_len < 1)
	{
		*range = '\0';
		return (0);
	}
	*range = ft_range(min, max);
	if (!range)
		return (-1);
	else
		return (range_len);
}
