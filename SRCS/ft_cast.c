/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:47:44 by brfeltz           #+#    #+#             */
/*   Updated: 2019/08/07 16:48:10 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADERS/ft_printf.h"

long long			ft_cast(va_list list, t_ops *ops)
{
	long long res;

	if (!ops->mod)
		res = va_arg(list, int);
	else if (ops->mod == 1)
		res = (short int)va_arg(list, int);
	else if (ops->mod == 2)
		res = (char)va_arg(list, int);
	else if (ops->mod == 3)
		res = va_arg(list, long int);
	else if (ops->mod == 4)
		res = va_arg(list, long long int);
	else
		res = 0;
	return (res);
}

unsigned long long	ft_cast_unsigned(va_list list, t_ops *ops)
{
	long long res;

	if (!ops->mod)
		res = va_arg(list, unsigned int);
	else if (ops->mod == 1)
		res = (unsigned short int)va_arg(list, unsigned int);
	else if (ops->mod == 2)
		res = (unsigned char)va_arg(list, unsigned int);
	else if (ops->mod == 3)
		res = va_arg(list, unsigned long int);
	else if (ops->mod == 4)
		res = va_arg(list, unsigned long long int);
	else
		res = 0;
	return (res);
}
