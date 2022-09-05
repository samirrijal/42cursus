/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:53:10 by srijal            #+#    #+#             */
/*   Updated: 2022/09/02 17:07:46 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		i = 0;
		while (i < (int)n)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i++;
		}
	}
	else
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i--;
		}
	}
	return (dest);
}
