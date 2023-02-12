/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:01:30 by khanhayf          #+#    #+#             */
/*   Updated: 2022/11/12 13:13:15 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elC, size_t elS)
{
	void	*p;

	p = malloc(elC * elS);
	if (p == NULL)
		return (NULL);
	ft_bzero (p, elC * elS);
	return (p);
}
