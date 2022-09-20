/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:33:59 by srijal            #+#    #+#             */
/*   Updated: 2022/09/15 17:26:28 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

int	print_char(va_list args)
{
	int	c;

	c = va_arg(args, int);
	write(FD, &c, 1);
	return (1);
}

int	print_string(va_list args)
{
	char	*s;
	int		i;

	s = va_arg(args, char *);
	if (!s)
	{
		write(FD, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		write(FD, &(s[i]), 1);
		i++;
	}
	return (i);
}

int	print_percent(void)
{
	write(FD, "%", 1);
	return (1);
}
