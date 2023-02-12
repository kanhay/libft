/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:47:18 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/08 17:02:46 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p;
	int		l;

	p = (char *)str;
	l = ft_strlen(p);
	while (l >= 0)
	{
		if (p[l] == (char)c)
			return (&p[l]);
		l--;
	}
	return (0);
}
