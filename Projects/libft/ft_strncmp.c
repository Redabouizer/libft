/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:21:09 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/26 16:30:59 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			len;
	unsigned char	*str1;
	unsigned char	*str2;

	len = n;
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[i] == s2[i]) && str1[i] && str2[i] && (len - 1) > 0)
	{
		i++;
		len--;
	}
	return (str1[i] - str2[i]);
}
