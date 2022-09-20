/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:17:09 by srijal            #+#    #+#             */
/*   Updated: 2022/09/15 17:25:31 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

static void	add_element(t_format_spec *data, int i, char specifier, int (*f)())
{
	data[i].specifier = specifier;
	data[i].func = f;
}

void	fill_specifiers_arr(t_format_spec *data)
{
	add_element(data, 0, 'c', &print_char);
	add_element(data, 1, 's', &print_string);
	add_element(data, 2, 'd', &print_number);
	add_element(data, 3, 'i', &print_number);
	add_element(data, 4, '%', &print_percent);
	add_element(data, 5, 'u', &print_unsigned_int);
	add_element(data, 6, 'x', &print_hexa_low);
	add_element(data, 7, 'X', &print_hexa_upp);
	add_element(data, 8, 'p', &print_ptr);
}
