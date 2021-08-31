/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnunes <wnunes@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:59:49 by wnunes            #+#    #+#             */
/*   Updated: 2021/08/27 22:40:21 by wnunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

#include <stdlib.h>

int	func_strlen ();

int	main ()
{
	//printf("%i\n", atoi(" -123j00unk"));
   // printf("%i\n", atoi("0"));
   // printf("%i\n", atoi("junk"));         // no conversion can be performed
    printf("%i\n", atoi("1231121312211"));   // UB: out of range of int
	//func_strlen();
	return 0;
}

int	func_strlen ()
{
	char a[20]="Program";
	char b[20]={'P','r','o','g','r','a','m','\0'};
	char c[20];

	printf("\n=============================================================");
	printf("\n *** ft_strlen *** \n");
	printf("Length of string a = %zu \n",ft_strlen(a));
	printf("Length of string a = %zu \n",ft_strlen(b));
	printf("Length of string a = %zu \n",ft_strlen(c));
	printf("=============================================================\n");
	return 0;
}
