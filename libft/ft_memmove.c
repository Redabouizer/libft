/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:10:37 by rbouizer          #+#    #+#             */
/*   Updated: 2023/12/16 22:55:36 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstt;
	char	*srcc;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (srcc == NULL && dstt == NULL)
		return (0);
	if (dstt > srcc)
	{
		while (n > 0)
		{
			dstt[n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*dstt++ = *srcc++;
			n--;
		}
	}
	return (dst);
}
