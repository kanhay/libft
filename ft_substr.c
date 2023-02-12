/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:46:42 by khanhayf          #+#    #+#             */
/*   Updated: 2022/12/17 14:18:57 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int first, size_t len)
{
	char			*str;
	char			*sub;
	size_t			i;
	unsigned int	l;

	str = (char *)s;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (len > l)
		len = l;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (*s && i < len && first <= l)
	{
		sub[i] = s[first];
		first++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
