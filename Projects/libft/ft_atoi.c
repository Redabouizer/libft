/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:42:59 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/11 21:57:32 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_atoi(const char *str)
{
    int i ;
    int k ;
    int res;

    i = 0;
    k = 1;
    res = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 )
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-'){
            k *=-1;
        }
        i++;
    }
    while ((str[i] >= '0' && str[i] <= '9') || str[i] == 32 )
    {
        res = (res*10) + (str[i] - '0');
        i++;
    }
    return (k * res);
}
/*
int main (){
    const char d[] ="   -2434a3";
    printf("%d",ft_atoi(d));
    return 0;
}
*/