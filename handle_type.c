/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:47:08 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 19:43:26 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

long int		get_char(char c, t_param param)
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

long int	get_str(char *str, t_param param)
{
	long int len;
	long int i;
	long int j;

	if (!str)
		return (get_str("(null)", param));
	len = ft_strlen(str);
	if (param.size >= 0)
		len = ft_min(ft_abs(param.size), ft_strlen(str));
	if (ft_abs(param.width) == 0 || ft_abs(param.width) < (int)len)
		i = 0;
	else
		i = ft_abs(param.width) - len;
	if ((!param.minus && param.width >= 0) && i > 0)
		putcharn((param.zero ? '0' : ' '), i);
	j = 0;
	while (j < len)
		ft_putchar_fd(str[j++], 1);
	j = 0;
	if ((param.zero || param.width < 0) && i > 0)
		putcharn((param.zero ? '0' : ' '), i);
	return (i + len);
}