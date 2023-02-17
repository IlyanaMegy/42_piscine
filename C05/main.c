#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include "ex00/ft_iterative_factorial.c"
// #include "ex01/ft_recursive_factorial.c"
// #include "ex02/ft_iterative_power.c"
// #include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"

int	main(void)
{
	// printf("-----------------------------------\n");
	// printf("--------iterative factorial--------\n");
	// printf("-----------------------------------\n");
	// printf("0:%d\n", ft_iterative_factorial(-10));
	// printf("0:%d\n", ft_iterative_factorial(-1));
	// printf("1:%d\n", ft_iterative_factorial(0));
	// printf("1:%d\n", ft_iterative_factorial(1));
	// printf("3628800:%d\n", ft_iterative_factorial(10));
	// printf("6:%d\n", ft_iterative_factorial(3));

	// printf("-----------------------------------\n");
	// printf("--------recursive factorial--------\n");
	// printf("-----------------------------------\n");
	// printf("0:%d\n", ft_recursive_factorial(-10));
	// printf("0:%d\n", ft_recursive_factorial(-1));
	// printf("1:%d\n", ft_recursive_factorial(0));
	// printf("1:%d\n", ft_recursive_factorial(1));
	// printf("3628800:%d\n", ft_recursive_factorial(10));
	// printf("6:%d\n", ft_recursive_factorial(3));

	// printf("-----------------------------------\n");
	// printf("----------iterative power----------\n");
	// printf("-----------------------------------\n");
	// printf("0:%d\n", ft_iterative_power(1, -10));
	// printf("0:%d\n", ft_iterative_power(1, -1));
	// printf("1:%d\n", ft_iterative_power(10, 0));
	// printf("10:%d\n", ft_iterative_power(10, 1));
	// printf("100:%d\n", ft_iterative_power(10, 2));
	// printf("216:%d\n", ft_iterative_power(6, 3));

	// printf("-----------------------------------\n");
	// printf("----------recursive power----------\n");
	// printf("0:%d\n", ft_recursive_power(1, -10));
	// printf("0:%d\n", ft_recursive_power(1, -1));
	// printf("1:%d\n", ft_recursive_power(10, 0));
	// printf("10:%d\n", ft_recursive_power(10, 1));
	// printf("100:%d\n", ft_recursive_power(10, 2));
	// printf("216:%d\n", ft_recursive_power(6, 3));

	printf("-----------------------------------\n");
	printf("-------------fibonacci-------------\n");
	printf("0:%d\n", ft_fibonacci(0));
	printf("1:%d\n", ft_fibonacci(1));
	printf("1:%d\n", ft_fibonacci(2));
	printf("2:%d\n", ft_fibonacci(3));
	printf("55:%d\n", ft_fibonacci(10));

	return (0);
}
