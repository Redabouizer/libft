/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:32:45 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 14:50:49 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i;
    size_t s_len;
    char *copy;

    i = 0;
    s_len = ft_strlen(s1);
    copy = malloc(sizeof(char) * s_len + 1);
    if (copy == NULL)
    {
        return NULL;
    }
    while (i < s_len)
    {
        copy[i] = s1[i];
        i++;
    }
    return copy;
    
}
/*
int main (){
    char d[] ="helloW";
    printf("%s\n", ft_strdup( d ));
    printf("%s\n", strdup( d ));
    return 0;
}
*/