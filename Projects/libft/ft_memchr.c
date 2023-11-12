/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 03:57:04 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 16:06:43 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if (*(unsigned char*)(s+i) == (unsigned char)c )
            return ((void *)(s+i));
        i++;
    }
    return NULL;
    
}
/*
int main (){
    char d[] ="src";
    char s ='c';
    printf("%p\n", ft_memchr( d , s , 3));
    printf("%p\n", memchr( &d , s , 3));
    return 0;
}
*/