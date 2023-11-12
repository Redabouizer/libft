/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:25:54 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 18:48:43 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
    }
    else if (n < 0)
    {
        ft_putchar_fd('-',fd);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        ft_putchar_fd(n + 48, fd);
    }    
}
/*
int main()
{
    ft_putnbr_fd(-21474836, 1);
}
*/
