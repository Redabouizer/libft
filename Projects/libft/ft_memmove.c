/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:10:37 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 05:29:06 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i ;
    
    if (dst < src)
        return ft_memcpy(dst,src,len);
    else
    {
        i = len - 1;
        while (i < len)
        {
            *(char *)(dst+i)=*(char *)(src+i);
            i--;
        }
        return dst;
    }
}
/*
int main ()
{
    char d[] ="helloFSFDDTFDDYJTJUKM";
    char s[] = "Hello World";
    printf("%s\n", ft_memmove( &d , &s , 6));
    printf("%s\n", memmove( &d , &s , 6));
    return 0;
}
*/
