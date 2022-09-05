/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:52:43 by srijal            #+#    #+#             */
/*   Updated: 2022/09/02 17:26:14 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	if (str[i] == (char)c)
		ptr = (char *) &str[i];
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == (char)c)
			ptr = (char *) &str[i];
	}
	return (ptr);
}
