/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:48:00 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/26 11:25:34 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nd_len;

	nd_len = ft_strlen(needle);
	if (nd_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= nd_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, nd_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
