// #include "ex00/ft_strdup.c"
// #include "ex01/ft_range.c"
// #include "ex02/ft_ultimate_range.c"
// #include "ex03/ft_strjoin.c"
// #include "ex04/ft_convert_base.c"
// #include "ex05/ft_split.c"

#include <stdlib.h>
#include <stdio.h>
// use cc -Wall -Werror -Wall -fsanitize=address main.c -g
// use valgrind ./a.out

int	main(void)
{
	// printf("--------------------------\n");
	// printf("----------strdup----------\n");
	// char *original;
	// char *copy;

	// original = "The original string.";
	// copy = ft_strdup(original);
	// printf("copy = %s\n", copy);
	// free(copy);
	// printf("\n\n");


	// printf("--------------------------\n");
	// printf("-----------range----------\n");
	// // int i;
	// int *array;

	// // i = 0;
	// array = ft_range(11, 10);
	// printf("%ls", array);
	// // while (array[i])
	// // {
	// // 	printf("%d\n", array[i]);
	// // 	i++;
	// // }
	// free(array);
	// printf("\n\n");


	// printf("--------------------------\n");
	// printf("--------ulti range--------\n");
    // int *range;

	// printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	// printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	// printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	// printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	// printf("-1, 0 : %d, %d", range[0], range[1]);
	// free(range);
	// printf("\n\n");


	// printf("--------------------------\n");
	// printf("-----------join-----------\n");
	// char *argv[5];
	// argv[0] = "";
	// argv[1] = "this";
	// argv[2] = "is";
	// argv[3] = "a";
	// argv[4] = "success";

	// char *res;

	// res = ft_strjoin(5, argv, "_o_");
	// printf("%s\n", res);
	// free(res);
	// // printf("%s\n",  ft_strjoin(5, argv, "_o_"));

	// res = ft_strjoin(0, argv, "_o_");
	// printf("test_null = %s\n", res);
	// free(res);
	// printf("\n\n");

	// int		offset;
	// char	**strs;
	// char	*res_str;

	// strs = malloc(3 * sizeof(char *));
	// if (strs == NULL)
	// 	return (1);
	// offset = 0;
	// while (offset < 3)
	// {
	// 	strs[offset] = "abc";
	// 	offset++;
	// }
	// res_str = ft_strjoin(3, strs, ", ");
	// if (res_str == NULL)
	// 	return (1);
	// printf("res: %s\n", res_str);
	// free(strs);
	// free(res_str);
	// return (0);


	// printf("--------------------------\n");
	// printf("-------convert base-------\n");

	// char *ft_convert_base(char *nbr, char *base_from, char *base_to);
	// char *test ;
	
	// test = ft_convert_base("\n  \t-52", "01234567", "0123456789abcdef");
	// printf("test = %s\n", test);
	// while (*test)
	// {
	// 	printf("%c", *test);
	// 	test++;
	// }
	// printf("\n%c\n", test[3]);
	// free(test);

	// printf("%s in base %s = %s in base %s\n", "2a", "0123456789abcdef", ft_convert_base("2a", "0123456789abcdef", "01234567"), "01234567");
	// printf("%s in base %s = %s in base %s\n", "2a", "0123456789abcdef", ft_convert_base("2a", "0123456789abcdef", "01"), "01");
	// printf("%s in base %s = %s in base %s\n", "420", "0123456789", ft_convert_base("++-+--420vu", "0123456789", "01"), "01");
	// printf("%s in base %s = %s in base %s\n", "-52", "01234567", ft_convert_base("\n  \t-52", "01234567", "0123456789abcdef"), "0123456789abcdef");
	
	// test = ft_convert_base("2a", "0123456789abcdef", "01234567");
	// printf("test = %s\n", test);
	// free(test);
	// test = ft_convert_base("2a", "0123456789abcdef", "01");
	// printf("test = %s\n", test);
	// free(test);
	// test = ft_convert_base("0", "0123456789", "poneyvif");
	// printf("test = %s\n", test);
	// free(test);
	// test = ft_convert_base("\n  \t-52", "01234567", "0123456789abcdef");
	// printf("test = %s\n", test);

	// free(test);
	// printf("\n\n");


	// printf("--------------------------\n");
	// printf("-----------split----------\n");
	// char **tab;
	// // char	*str = "coucou comment ca va copain ? ";
	// char	*str = "co a copain ? ";
	// char	*sep = " c";
	// int	i;

	// i = 0;
	// tab = ft_split(str, sep);
	// while (tab[i])
	// {
	// 	printf("res[%d] = \"%s\"\n", i, tab[i]);
	// 	i++;
	// }
	// printf("res[%d] = %s\n", i, tab[i]);
	return (0);
}
