/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:32:11 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 16:10:12 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;

    while ((i < n))
    {
        if ((*(unsigned char *)(s1+i)) != (*(unsigned char *)(s2+i)))
        {
            return (int)((*(unsigned char *)(s1+i)) - (*(unsigned char *)(s2+i)));
        }
        i++;
    }
    
    return 0;
}
/*
int main (){
    char d[] ="";
    char s[] ="";
    printf("%d\n", ft_memcmp( d , s , 5));
    printf("%d\n", memcmp( &d , s , 5));
    return 0;
}
*/
int main ()
{
    printf("%d\n", ft_memcmp( "a" , "d" , 1));
    printf("%d\n", memcmp( &"a" , "d" , 1));
}