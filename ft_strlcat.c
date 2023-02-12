/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:28:32 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 13:18:30 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	i;
	size_t	d;

	ls = ft_strlen(src);
	if (!dst && !dstsize)
		return (ls);
	ld = ft_strlen(dst);
	if (dstsize <= ld)
		return (dstsize + ls);
	i = 0;
	d = ld;
	while (src[i] && d < dstsize - 1)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (ld + ls);
}
