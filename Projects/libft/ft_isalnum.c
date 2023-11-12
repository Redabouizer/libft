/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:20:19 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 02:20:20 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int c){
    return (ft_isdigit(c) || ft_isalpha(c));
}
/*
int main(){
    printf("%d", ft_isalnum(' '));
    return 0;
}
*/
