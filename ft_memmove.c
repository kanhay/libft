/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:50:29 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 14:49:08 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t z)
{
	char	*s;
	char	*d;
	int		i;

	i = z - 1;
	s = (char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (z-- > 0)
		{
			d[z] = s[z];
		}
	}
	else
		ft_memcpy(dest, src, z);
	return (dest);
}
