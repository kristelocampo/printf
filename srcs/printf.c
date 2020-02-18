/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:30:57 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/18 19:10:40 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*tab;
	int			len;

	len = 0;
	tab = (char *)format;
	va_start(args, format);
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
	
	(*tab)++;
	init(&param);
	get_flag(tab, &param);
	if (**tab == '*')
	{
		param.width = va_arg(args, unsigned int);
		(*tab)++;
	}
	else
		param.width = get_width(tab);
	if (**tab == '.' && (*tab)[1] == '*')
	{
		param.size = va_arg(args, unsigned int);
		(*tab) += 2;
	}
	else
		param.size = get_size(tab);
	type = **tab;
	(*tab)++;
	return (handle_type(type, args, param));
}

int		handle_type(char type, va_list args, t_param param)
{
	if (type == 'c')
		return (get_char(va_arg(args, int), param));
	else if (type == 's')
		return (get_str(va_arg(args, char*), param));
	else if (type == 'd' || type == 'i')
		return (get_int(va_arg(args, long int), param));
	else if (type == 'x')
		return (get_hex(va_arg(args, long int), param, "0123456789abcdef"));
	else if (type == 'X')
		return (get_hex(va_arg(args, long int), param, "0123456789ABCDEF"));
	else if (type == 'u')
		return (get_hex(va_arg(args, long int), param, "0123456789"));
	else if (type == 'p')
		return (get_ptr(va_arg(args, void*), param));
	else if (type == '%')
		return (get_char('%', param));
	return (0);
}