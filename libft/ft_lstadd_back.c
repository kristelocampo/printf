/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:52:13 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/18 19:06:50 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*dest;

	if (!list)
		return ;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	dest = *list;
	while (dest->next)
		dest = dest->next;
	dest->next = new;
}
