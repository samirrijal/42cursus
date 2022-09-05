/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:52:55 by srijal            #+#    #+#             */
/*   Updated: 2022/09/02 17:17:31 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	if (!dest && !src)
		return (0);
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (src_size + size);
	i = dest_size;
	while (src[i - dest_size] != '\0' && i < size - 1)
	{
		dest[i] = src[i - dest_size];
		i++;
	}
	dest[i] = '\0';
	return (dest_size + src_size);
}
