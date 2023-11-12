/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:43:07 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 14:49:36 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0 ,n);
}
/*
int main (){
    char d1[] ="hello World";
    char d2[] ="hello World";
    ft_bzero( &d1 , 4);
    printf("%s\n", d1);
    bzero( &d2 , 4);
    printf("%s\n", d2);
    return 0;
}
*/
