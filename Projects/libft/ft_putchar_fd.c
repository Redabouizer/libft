/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:30:35 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 18:02:13 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}
/*
int main()
{
    ft_putchar_fd('c', 1);
}
*/