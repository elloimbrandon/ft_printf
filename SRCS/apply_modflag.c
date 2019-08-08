/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_modflag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:31:10 by brfeltz           #+#    #+#             */
/*   Updated: 2019/08/07 16:43:35 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADERS/ft_printf.h"

t_vals	prec_checker(char *temp, char *str, t_ops *ops)
{
	int	i;
	int	x;
	int	length;

	i = 0;
	x = 0;
	length = ft_strlen(str);
	if (length == 1 && ops->minus)
	{
		length++;
		ops->percision++;
	}
	else if (str[i] == '-')
	{
		temp[x++] = '-';
		ops->percision++;
		i++;
	}
	else if (ops->add)
	{
		temp[x] = '+';
		i++;
	}
	return ((t_vals){x, i, length});
}

char	check_prec_flag(t_ops *ops, char *temp, int x)
{
	if (ops->minus && (!conversion_check("sp", ops->conversion)))
		return (temp[x] = '-');
	else if (ops->add && (ops->minus == 0))
		return (temp[x] = '+');
	else if (ops->add && (!conversion_check("sp", ops->conversion)))
		return (temp[x] = '+');
	else if (ops->space && (ops->minus == 0))
		return (temp[x] = ' ');
	else
		return (0);
}

char	ft_isflag(char x)
{
	return (x == '-' || x == '+' || x == ' ' || x == '0' || x == 0 ? x : 1);
}
