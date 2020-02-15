/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:47:08 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 18:20:03 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned int		get_char(char c, t_param param)
{
	int i;

	i = 0;
	if (param.width > 0)
		i = param.width - 1;
	if (!param.minus && param.width > 0)
		putcharn((param.zero ? '0' : ' '), i);
	ft_putchar_fd(c, 1);
	if (param.minus || param.width < 0)
		putcharn((param.zero ? '0' : ' '), i);
	return (i + 1);
}