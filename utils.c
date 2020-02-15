/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:55:45 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 17:44:20 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	init(t_param *param)
{
	param->width = 0;
	param->size = 0;
	param->zero = 0;
	param->minus = 0;
}

void	putcharn(char ch, int size)
{
	if (size <= 0)
		return ;
	while (size--)
		ft_putchar_fd(ch, 1);
}