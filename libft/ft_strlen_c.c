/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:13:45 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:30:00 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_c(const char *s, char c)
{
	size_t	i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i);
}
