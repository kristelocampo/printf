/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:30:57 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 18:19:09 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*tab;
	int			len;

	len = 0;
	va_start(args, format);
	tab = (char *)format;
	while (*tab)
	{
		if (*tab != '%' && ++len)
			ft_putchar_fd(*(tab++), 1);
		else
			len += handle_format(&tab, args);
	}
	va_end(args);
	return (len);
}

int		handle_format(char **tab, va_list args)
{
	t_param param;
	char	type;
	
	init(&param);
	(*tab)++;
	get_flag(tab, &param);
	param.width = get_width(tab, args);
	//printf("width %d\n", param.width);
	param.size = get_size(tab, args);
	//printf("size %d\n", param.size);
	(*tab)++;
	type = **tab;
	(*tab)++;
	return (handle_type(type, args, param));
}

int		handle_type(char type, va_list args, t_param param)
{
	if (type == 'c')
		return (get_char(va_arg(args, int), param));
	return (0);
}