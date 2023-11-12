/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:57:21 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 05:07:29 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return (char*)(s + i);
        i++;
    }
    return NULL;
}
/*
int main (){
    char d[] ="helloFSFDDTFDDHYJTJUKM";
    char s = 'Y';
    printf("%s\n", ft_strchr( d , s));
    printf("%s\n", strchr( d , s));
    return 0;
}
*/

