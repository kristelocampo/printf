/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:47:08 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 20:11:35 by krisocam         ###   ########.fr       */
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

long int	get_int(long nb, t_param param)
{
	char		*tmp;
	int			space;
	int			zero;
	long int	i;
	long int	j;

	space = 0;
	zero = 0;
	j = (nb < 0 ? 1 : 0);
	if (nb == 0 && param.size == 0)
		tmp = ft_calloc(1, sizeof(char));
	else
		tmp = ft_itoa(nb);
	i = ft_strlen(tmp);
	if (i >= 0 && param.size > (int)i)
		zero = param.size - i;
	else if (param.zero && param.width > (int)i + j && param.size < 0)
		zero = param.width - i - j;
	if (param.width > zero + (int)i + j)
		space = param.width - (zero + i + j);
	putcharn(' ', ((!param.minus && param.width >= 0) ? space : 0));
	putcharn('0', zero);
	ft_putstr_fd(tmp, 1);
	putcharn(' ', ((param.minus || param.width < 0) ? space : 0));
	free(tmp);
	return (i + space + zero + (nb < 0));
}