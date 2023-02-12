/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:41:11 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 13:13:42 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		c++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{	
	int		l;
	char	*s;
	long	nb;

	l = ft_count(n);
	nb = n;
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	s[l] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		s[0] = '0';
	while (nb > 0 && l-- > 0)
	{
		s[l] = (nb % 10) + 48;
		nb /= 10;
	}
	return (s);
}
