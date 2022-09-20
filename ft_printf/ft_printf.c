/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:53:32 by srijal            #+#    #+#             */
/*   Updated: 2022/09/15 17:25:00 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_utils.h"

static int	run_func(va_list args, t_format_spec *data, char spec, int *size)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (data[i].specifier == spec)
		{
			*size += data[i].func(args);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	t_format_spec	data[SIZE];
	int				i;
	int				size;

	size = 0;
	va_start(args, format);
	fill_specifiers_arr(data);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(FD, &format[i], 1);
			size++;
		}
		else
		{
			if (run_func(args, data, format[i + 1], &size))
				i++;
		}
		i++;
	}
	va_end(args);
	return (size);
}
