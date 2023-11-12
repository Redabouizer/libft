/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:21:09 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 02:21:11 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i;
    size_t len;

    len = n ;
    i = 0;
    while ((s1[i] == s2[i]) && s1[i] && s2[i] && (len - 1) > 0  )
    {
        i++;
        len--;
    }
    return(s1[i] - s2[i]);
}
/*

 int main(){
    printf("%d",ft_strncmp("amina","amine",4));
    return 0;
 }
 */
