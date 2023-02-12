/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:08:14 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 15:02:17 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (little[0] == '\0')
		return (b);
	if (!big && !len)
		return (NULL);
	while (big[i] && i < len)
	{
		if (ft_strncmp(&b[i], l, ft_strlen(little)) == 0)
		{
			if (i + ft_strlen(little) <= len)
				return (&b[i]);
			else
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
