/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:30:57 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 20:14:05 by krisocam         ###   ########.fr       */
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
		param.width = va_arg(args, int);
		(*tab)++;
	}
	else
		param.width = get_width(tab);
//	printf("width %d\n", param.width);
	if (**tab == '.' && (*tab)[1] == '*')
	{
		param.size = va_arg(args, int);
		(*tab) += 2;
	}
	else
		param.size = get_size(tab);
	printf("size %d\n", param.size);
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
	return (0);
}