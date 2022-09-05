/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:42:26 by srijal            #+#    #+#             */
/*   Updated: 2022/09/03 22:42:43 by srijal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_index(char const *s1, char const *set, int start, int dir)
{
	while (dir > 0 && s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (dir < 0 && start >= 0 && ft_strchr(set, s1[start]))
		start--;
	if (start < 0)
		return (0);
	else
		return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i_start;
	int	i_end;
	int	size;

	if (!s1 || !set)
		return (0);
	i_start = get_index(s1, set, 0, 1);
	if (i_start == (int)ft_strlen(s1))
		size = 0;
	else
	{
		i_end = get_index(s1, set, (ft_strlen(s1) - 1), -1);
		size = (i_end - i_start) + 1;
	}
	return (ft_substr(s1, i_start, size));
}
