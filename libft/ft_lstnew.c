/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:20:01 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/18 18:15:09 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*res;

	if (!(res = malloc(sizeof(t_list) * 1)))
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
