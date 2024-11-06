/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohadon <tcohadon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:24:30 by tcohadon          #+#    #+#             */
/*   Updated: 2024/11/06 16:03:12 by tcohadon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	void *p;

	printf("\033[1;4;31mtest 1 :\033[0m\n");
	int t1 = ft_printf("           ft_printf : %c\n", 'c');
	int t1p = printf("              printf : %c\n", 'c');
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t1, t1p);
	
	printf("\033[1;4;31mtest 2 :\033[0m\n");
	int t2 = ft_printf("          ft_printf : %c\n", "true");
	int t2p = printf("             printf : %c\n", "true");
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t2, t2p);
	
	printf("\033[1;4;31mtest 3 :\033[0m\n");
	int t3 = ft_printf("           ft_printf : %c\n", "false");
	int t3p = printf("              printf : %c\n", "false");
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t3, t3p);
 
	printf("\033[1;4;31mtest 4 :\033[0m\n");
	int t4 = ft_printf("           ft_printf : %p\n", p);
	int t4p = printf("              printf : %p\n", p);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t4, t4p);
	
	printf("\033[1;4;31mtest 5 :\033[0m\n");
	int t5 = ft_printf("           ft_printf : %p\n", "banana");
	int t5p = printf("              printf : %p\n", "banana");
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t5, t5p);
	
	printf("\033[1;4;31mtest 6 :\033[0m\n");
	int t6 = ft_printf("           ft_printf : %p\n", NULL);
	int t6p = printf("              printf : %p\n", NULL);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t6, t6p);
	
	printf("\033[1;4;31mtest 7 :\033[0m\n");
	int t7 = ft_printf("           ft_printf : %p\n", 18446744073709551615);
	int t7p = printf("              printf : %p\n", 18446744073709551615);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t7, t7p);

	printf("\033[1;4;31mtest 8 :\033[0m\n");
	int t8 = ft_printf("           ft_printf : %p\n", 0);
	int t8p = printf("              printf : %p\n", 0);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t8, t8p);
	
	printf("\033[1;4;31mtest 9 :\033[0m\n");
	int t9 = ft_printf("           ft_printf : %p\n", 69);
	int t9p = printf("              printf : %p\n", 69);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t9, t9p);

	printf("\033[1;4;31mtest 10 :\033[0m\n");
	int t10 = ft_printf("           ft_printf : %d\n", INT_MAX);
	int t10p = printf("              printf : %d\n", INT_MAX);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t10, t10p);
	
	printf("\033[1;4;31mtest 11 :\033[0m\n");
	int t11 = ft_printf("           ft_printf : %d\n", INT_MIN);
	int t11p = printf("              printf : %d\n", INT_MIN);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t11, t11p);
	
	printf("\033[1;4;31mtest 12 :\033[0m\n");
	int t12 = ft_printf("           ft_printf : %d\n", NULL);
	int t12p = printf("              printf : %d\n", NULL);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t12, t12p);

	printf("\033[1;4;31mtest 13 :\033[0m\n");
	int t13 = ft_printf("           ft_printf : %u\n", 4294967295);
	int t13p = printf("              printf : %u\n", 4294967295);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t13, t13p);
	
	printf("\033[1;4;31mtest 14 :\033[0m\n");
	int t14 = ft_printf("           ft_printf : %u\n", -10);
	int t14p = printf("              printf : %u\n", -10);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t14, t14p);
	
	printf("\033[1;4;31mtest 15 :\033[0m\n");
	int t15 = ft_printf("           ft_printf : %u\n", -42949672944);
	int t15p = printf("              printf : %u\n", -42949672944);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t15, t15p);
	
	printf("\033[1;4;31mtest 16 :\033[0m\n");
	int t16 = ft_printf("           ft_printf : %u\n", NULL);
	int t16p = printf("              printf : %u\n", NULL);
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t16, t16p);

	printf("\033[1;4;31mtest 17 :\033[0m\n");
	int t17 = ft_printf("           ft_printf : %q   \n");
	int t17p = printf("              printf : %q          \n");
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t17, t17p);

	printf("\033[1;4;31mtest 18 :\033[0m\n");
	int t18 = ft_printf("           ft_printf : %        \n");
	int t18p = printf("              printf : %          \n");
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t18, t18p);
	
	printf("\033[1;4;31mtest 19 :\033[0m\n");
	int t19 = ft_printf("           ft_printf : %          %\n");
	int t19p = printf("              printf : %          %\n");
	printf("\nretour de ft = %i\nretour de og = %i\n\n", t19, t19p);

	return 0;
}



