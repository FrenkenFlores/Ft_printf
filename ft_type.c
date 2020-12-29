/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:37:49 by fflores           #+#    #+#             */
/*   Updated: 2020/08/03 10:38:01 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(int type)
{
	if ((type == 'c') || (type == 's') || (type == 'p') || (type == 'd') ||
	(type == 'i') || (type == 'u') || (type == 'x') || (type == 'X') ||
	(type == '%'))
		return (1);
	return (0);
}