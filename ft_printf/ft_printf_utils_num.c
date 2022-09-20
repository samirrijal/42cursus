/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_num.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:39:17 by srijal            #+#    #+#             */
/*   Updated: 2022/09/15 17:25:55 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

static void	put_nbr(long int n)
{
	long int	nb;
	char		c;

	nb = n;
	if (n < 0)
	{
		write(FD, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		put_nbr((nb / 10));
	c = nb - ((nb / 10) * 10) + 48;
	write(FD, &c, 1);
}

static int	get_num_size(long int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	print_number(va_list args)
{
	int	n;

	n = va_arg(args, int);
	put_nbr(n);
	return (get_num_size(n));
}

int	print_unsigned_int(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	put_nbr(n);
	return (get_num_size(n));
}
