/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:27:42 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 15:06:14 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_chr(char const *string, char c)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set )
{
	char	*str;
	int		i;
	int		j;
	int		l;

	if (!s1 || !set)
		return (NULL);
	l = ft_strlen(s1);
	i = 0;
	while (s1[i] && find_chr(set, s1[i]))
		i++;
	while (l > i && find_chr(set, s1[l - 1]))
		l--;
	str = (char *)malloc(sizeof(char) * (l - i) + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i < l)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
