/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:52:14 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/26 19:52:34 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sz;

	if (!lst)
		return (0);
	sz = 0;
	while (lst)
	{
		sz++;
		lst = lst -> next;
	}
	return (sz);
}
