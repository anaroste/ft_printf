/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_o.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:08:51 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/04 16:29:00 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static void		ft_convert_o_second(t_stock *stock)
{
	if (stock->opt[6] == 0)
	{
		if (!(stock->str = (char *)malloc(1)))
			exit(EXIT_FAILURE);
		stock->str[0] = '\0';
	}
	else
	{
		if (!(stock->str = (char *)malloc(2)))
			exit(EXIT_FAILURE);
		stock->str[0] = '0';
		stock->str[1] = '\0';
	}
}

void			ft_convert_o(t_stock *stock)
{
	if (stock->ull == 0)
		ft_convert_o_second(stock);
	else
		stock->str = ft_ullong_itoa_base(stock->ull, 8);
	if (stock->opt[6] > (int)ft_strlen(stock->str))
		ft_add_nchar_before(stock, stock->opt[6] - (int)ft_strlen(stock->str),
				'0');
	if (stock->opt[0] == 1 && stock->str[0] != '0')
		ft_add_nchar_before(stock, 1, '0');
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if ((stock->opt[6] < 0 && stock->opt[2] == -1) && stock->opt[1] == 1)
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), '0');
		else if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
		else
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
	}
}
