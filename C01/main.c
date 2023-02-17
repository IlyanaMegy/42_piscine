/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:10:33 by ilymegy           #+#    #+#             */
/*   Updated: 2023/02/10 13:11:02 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main(void)
{
	//int	a;
	//a = 15;
	//ft_ft(&a);
	
	// int	a = 10;
	// int	b = 3;
	//int div;
	//int mod;

	//ft_swap(&a, &b);
	//ft_div_mod(a, b, &div, &mod);
	
	// ft_ultimate_div_mod(&a, &b);

	char	my_str[] = "hello world !";
	ft_putstr(my_str);
	// printf("\n%\n", ft_strlen(my_str));
	
	int	size = 5;
	int	tab[] = {1,2,-5,4,6};
	ft_rev_int_tab(tab,size);
	//ft_sort_int_tab(tab,size);

	return 0;
}
