// #include "ex00/ft_strdup.c"
// #include "ex01/ft_range.c"
// #include "ex02/ft_ultimate_range.c"
// #include "ex03/ft_strjoin.c"
#include "ex04/ft_convert_base.c"
#include "ex04/ft_convert_base2.c"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_c(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print_c(str[i]);
		i++;
	}
}

void	print_int(int n)
{
	if (n == 2147483647)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		print_int(147483647);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		print_int(-n);
	}
	if (n > 9)
	{
		print_int(n / 10);
		print_c(n % 10 + 48);
	}
	else
		print_c(n + 48);
}

int	main(void)
{
	// int		i;
	// // char	*original;
	// // char	*copy;
	// int		*array;

	// i = 0;
	// while (i < argc)
	// {
	// 	print_str("argv[");
	// 	print_int(i);
	// 	print_str("] = ");
	// 	print_str(argv[i]);
	// 	print_str("\n");
	// 	++i;
	// }


	// print_str("--------------------------\n");
	// print_str("----------strdup----------\n");
	// if (argc > 1)
	// 	original = argv[1];
	// else
	// 	original = "The original string.";
	// copy = ft_strdup(original);
	// print_str(copy);
	// free(copy);
	// print_str("\n\n");


	// print_str("--------------------------\n");
	// print_str("-----------range----------\n");
	// i = 0;
	// array = ft_range(5, 10);
	// while (array[i])
	// {
	// 	print_int(array[i]);
	// 	print_str("\n");
	// 	i++;
	// }
	// free(array);
	// print_str("\n\n");

    // int *range;

	// printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	// printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	// printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	// printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	// printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	// printf("-1, 0 : %d, %d", range[0], range[1]);
	// free(range);

	// print_str("--------------------------\n");
	// print_str("-----------join-----------\n");
	// char *argv[5];
	
	// argv[0] = "said";
	// argv[1] = "this";
	// argv[2] = "is";
	// argv[3] = "a";
	// argv[4] = "success";
	// printf("%s\n",  ft_strjoin(0, argv, "_o_"));

	printf("%s in base %s = %s in base %s\n", "2a", "0123456789abcdef", ft_convert_base("2a", "0123456789abcdef", "01234567"), "01234567");
	printf("%s in base %s = %s in base %s\n", "2a", "0123456789abcdef", ft_convert_base("2a", "0123456789abcdef", "01"), "01");
	printf("%s in base %s = %s in base %s\n", "42", "0123456789", ft_convert_base("++-+--420vu", "01234561789", "01"), "01");
	printf("%s in base %s = %s in base %s\n", "-52", "01234567", ft_convert_base("\n  \t-52", "01234567", "0123456789abcdef"), "0123456789abcdef");

	return (0);
}
