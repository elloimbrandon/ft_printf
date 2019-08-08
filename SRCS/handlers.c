/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:58:34 by brfeltz           #+#    #+#             */
/*   Updated: 2019/08/07 18:45:40 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADERS/ft_printf.h"

int		handle_char(va_list list, t_ops *ops)
{
	char				*temp;
	char				*str;
	int					res;
	int					x;

	x = 0;
	res = 0;
	temp = ft_strnew(4864);
	if (ops->conversion == 's')
	{
		str = va_arg(list, char*);
		if (!str)
			ft_bzero(str, ft_strlen(str));
		else
			ft_strcpy(temp, str);
	}
	else if (ops->conversion == 'c')
		temp[x] = va_arg(list, int);
	ops->printed = flag_mods(ops, temp);
	return (ops->printed);
}

int		handle_int(va_list list, t_ops *ops)
{
	char				*temp;
	char				*str;
	int					res;
	long long			x;

	res = 0;
	str = 0;
	temp = ft_strnew(4864);
	x = ft_cast(list, ops);
	if (ops->conversion == 'd' || ops->conversion == 'i')
	{
		if ((x < 0 || x >= 0) && (x != LONG_LONG_MAX))
			str = ft_itoall(x);
		if (x > LONG_LONG_MAX)
			str = ft_unlltoa(x);
		else if (x == 0)
			str[0] = '0';
		ft_strcpy(temp, str);
		ft_strdel(&str);
	}
	ops->printed = flag_mods(ops, temp);
	return (ops->printed);
}

int		handle_oc_hex_ptr(va_list list, t_ops *ops)
{
	char				*temp;
	int					res;
	unsigned long long	x;

	res = 0;
	temp = ft_strnew(4864);
	if (ops->conversion == 'p')
		x = va_arg(list, unsigned long long int);
	else
		x = ft_cast_unsigned(list, ops);
	if (ops->conversion == 'o')
		ft_itoabase(x, 8, ops, temp);
	else
		ft_itoabase(x, 16, ops, temp);
	ops->printed = flag_mods(ops, temp);
	return (ops->printed);
}

int		handle_unll(va_list list, t_ops *ops)
{
	char				*temp;
	char				*str;
	int					res;
	unsigned long long	x;

	res = 0;
	temp = ft_strnew(4864);
	x = ft_cast_unsigned(list, ops);
	if (x)
	{
		str = ft_unlltoa(x);
		ft_strcpy(temp, str);
		ft_strdel(&str);
	}
	else if (!x)
		temp[0] = '0';
	ops->printed = flag_mods(ops, temp);
	return (ops->printed);
}
