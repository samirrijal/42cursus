/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:45:23 by srijal            #+#    #+#             */
/*   Updated: 2022/09/03 22:45:42 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		while (*s != '\0')
		{
			write(fd, &(*s), 1);
			s++;
		}
		write(fd, "\n", 1);
	}		
}
