/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:06:23 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/18 18:32:13 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list)
		return ;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	if (list && new)
	{
		new->next = *list;
		*list = new;
	}
}
