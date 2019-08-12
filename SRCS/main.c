/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 18:38:01 by brfeltz           #+#    #+#             */
/*   Updated: 2019/08/12 13:23:31 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADERS/ft_printf.h"
#include <limits.h>

int	main(void)
{
	//char wz[] = "hello human\n";
	//unsigned long long  a;
   // int a = 55;
    //int *pt;
    //*pt = a;
    //ft_printf("cpu:%5%\n");
    //ft_printf("%-05d", -42);
   // printf("%x", 0);
    //ft_printf("mine:%d\n", 0);
    //printf("theird:%d", 1);
    //printf("cpu:%*d\n", 5, 42);
    //ft_printf("mine:%b\n", 42);
    //ft_printf("%x", 0);
//	printf("%lld", 9223372036854775807);
	ft_printf("%lld", 9223372036854775807);
	/*
    printf("cpu:%-15x\n", 542);
    ft_printf("mine%-15x\n", 542);
    ft_printf("mine:%#08x\n", 42);
    printf("cpu:%#08x\n", 42);
    ft_printf("mine:%#8x\n", 42);
    printf("cpu:%#8x\n", 42);
    ft_printf("mine:%#8x\n", 42);
    //printf("%-05d", -42);
    */
	/*
    printf("%#08x\n", 42);
    ft_printf("mine:%#08x\n", 42);
    printf("%#08X\n", 42);
    ft_printf("mine:%#08X\n", 42);
    printf("cpu:%#08o\n", 42);
    ft_printf("mine:%#08o\n", 42);
    */
    /*
    ft_printf("mine:%.5d\n", a);
    printf("cpu:%.5d\n", a);
    //ft_printf("with percision mine:%5.s", wz);
    //printf("with percision cpu:%5.s", wz);
    printf("cpu:%-.4s\n", "brandon");
    ft_printf("mine:%-.4s\n", "brandon");
    printf("cpu:%-.p\n", &a);
    ft_printf("mine:%-.p\n", &a);
    ft_printf("mine:%.1d\n", 123); // at precision 1 breaks
	printf("cpu:%.1d\n", 123);
	ft_printf("mine:%.10d\n", 123456789);
	printf("cpu:%.10d\n", 123456789);
	ft_printf("mine:%-.6d\n", a);
	printf("cpu:%-.6d\n", a);
	ft_printf("mine:%.4d\n", 123456);
	printf("cpu:%.4d\n", 123456);
	ft_printf("mine:%+.4d\n", 123456);
	printf("cpu:%+.4d\n", 123456);
	ft_printf("mine:%+-.4d\n", -123456);
	printf("cpu:%+-.4d\n", -123456);
	ft_printf("mine:%-.4d\n", 123456);
	printf("cpu:%-.4d\n", 123456);
    ft_printf("mine:%s\n", "brandon");
    printf("cpu:%s\n", "brandon");
	ft_printf("mine:%%\n");
    printf("cpu:%%\n");
    printf("cpu:%.3s\n", "hello");
    ft_printf("mine:%.3s\n", "hello");
    printf("cpu:%20s\n", "lets kick rocks");
    ft_printf("mine:%20s\n", "lets kick rocks");
    ft_printf("string");
	printf("cpu:%c\n", 'a');
	ft_printf("mine:%c\n", 'a');
	ft_printf("mine:%s\n", "hello");
	printf("cpu:%s\n", "hello");
	ft_printf("mine:%p\n", &a);
    printf("cpu:%p\n", &a);
	ft_printf("mine:%c\n", 'A');
	printf("cpu:%c\n", 'A');
	printf("cpu:%ld\n", 237469821234);
	ft_printf("mine:%ld\n", 237469821234);
	printf("cpu:%ld\n", 1234567812345678);
	ft_printf("mine:%ld\n", 1234567812345678);
    printf("cpu:%04i\n", 42);
    ft_printf("mine:%04i\n", 42);
	printf("cpu:%X\n", 10);
	ft_printf("mine:%X\n", 10);
	printf("cpu:%10s\n", "cat");
	ft_printf("mine:%10s\n", "cat");
	printf("cpu:%x\n", 29);
	ft_printf("mine:%x\n", 29);
	printf("cpu:%04.5i\n", 42);
    ft_printf("mine:%04.5i\n", 42);
*/
	return (0);
}
