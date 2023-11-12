/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:42 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 15:44:35 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *p;

    p = (void*)malloc(count * size);
    if (!p)
    {
        return NULL;
    }
    ft_bzero(p , count);
    return p;
    
}
/*
int main (){
    printf("%s\n", ft_calloc( 4, sizeof(int)));
    printf("%s\n", calloc( 4, sizeof(int) ));
    return 0;
}
*/
