/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:33:10 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 17:01:55 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)d;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (d);
}
