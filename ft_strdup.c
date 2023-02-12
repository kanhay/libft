/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:50:19 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 13:16:54 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*a;
	int		i;
	int		l;

	a = (char *)s;
	l = ft_strlen(a);
	i = 0;
	p = (char *)malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		p[i] = a[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
