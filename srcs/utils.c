/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:55:45 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/24 14:44:44 by krisocam         ###   ########.fr       */
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

long int	ft_abs(long int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

long int	ft_min(long int a, long int b)
{
	if (a < b)
		return (a);
	return (b);
}

long int	ft_max(long int a, long int b)
{
	if (a < b)
		return (b);
	return (a);
}