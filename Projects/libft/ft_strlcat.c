/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:20:50 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 05:07:53 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t src_len;
    size_t dest_len;
    size_t j_dest;

    i = 0;
    src_len = ft_strlen(src);
    if (dst)
    {
        dest_len = ft_strlen(dst);
    }else{
        dest_len = 0;
    }
    j_dest = dest_len;
    if (dstsize == 0)
    {
        return src_len;
    }
    while (src[i] != '\0' && j_dest < (dstsize - 1))
    {
        dst[j_dest]=src[i];
        j_dest++;
        i++;
    }
    dst[j_dest++]='\0';
    return (dest_len + src_len);
}
/*

int main (){
    char d[] ="dgdhfh";
    char s[] ="jfjfjf";

    printf("%d" , ft_strlcat(d,s, 5));
    return 0;
}
*/
