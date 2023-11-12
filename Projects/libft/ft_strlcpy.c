/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:20:56 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 05:08:20 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t len_src;

    i = 0;
    len_src = ft_strlen(src);
    if (!dst || !src)
    {
        return (0);
    }
    if (dstsize == 0)
    {
        return (len_src);
    }
    while (src[i] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len_src);
}
/*
int main (){
    char d[] ="dgdhfh";
    char s[] ="jfjfjf";

    printf("%d" , ft_strlcpy(d,s, 5));
    return 0;
}
*/
