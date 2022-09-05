/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:43:28 by srijal            #+#    #+#             */
/*   Updated: 2022/09/03 22:43:44 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}	
	return (i);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*str;
	long int	nbr;

	nbr = (long int) n;
	size = get_size(nbr);
	str = malloc((1 + size) * sizeof(char));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
		str[0] = '0';
	str[size] = '\0';
	while (nbr > 0)
	{
		str[--size] = (nbr - ((nbr / 10) * 10)) + '0';
		nbr /= 10;
	}
	return (str);
}
