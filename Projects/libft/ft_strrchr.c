/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:21:04 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 05:08:06 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len_s;
    
    if (!s)
        return NULL;
    len_s = ft_strlen(s);
    while (len_s>= 0)
    {
        if (s[len_s] == (char)c)
            return (char*)s + len_s;
        len_s--;
    }
    return NULL;
}
/*
int main (){
    char d[] ="helloFSFDDTFDDHYJTJUKM";
    char s = 'H';
    printf("%s\n", ft_strrchr( d , s));
    printf("%s\n", strrchr( d , s));
    return 0;
}
*/

