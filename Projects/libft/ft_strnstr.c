/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:48:00 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 16:27:28 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    while(haystack[i] != '\0' && i < len )
    {
        j = 0;
        while (haystack[i+j] == needle[j]&& i+j < len)
            j++;
        if (needle[j] == '\0')
                return ((char*)(haystack+i));
        i++;
    }
    return NULL;
}
/*
 int main()
 {
    printf("%s\n",ft_strnstr("aminead","ad",2));
    printf("%s\n", strnstr("aminead","ad",2));
    return 0;
 }
 */
