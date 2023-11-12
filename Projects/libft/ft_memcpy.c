/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:22:09 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 14:24:01 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;

    while (i < n)
    {
        *(char *)(dst+i) = *(char *)(src+i);
        i++;
    }
    return (dst);
}
/*
int main (){
    char d[] ="helloFSFDDTFDDYJTJUKM";
    char s[] = "Hello World";
    printf("%s\n", ft_memcpy( &d , &s , 6));
    printf("%s\n", memcpy( &d , &s , 6));
    return 0;
}
*/

