/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:51:37 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 18:09:29 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	get_flag(char **tab, t_param *param)
{
	while (**tab == '-' || **tab == '0')
	{
		if (**tab == '-')
			param->minus = 1;
		else if (**tab == '0' && param->minus == 0)
			param->zero = 1;
		(*tab)++;
	}
}

int		get_width(char **tab, va_list args)
{
	int	w;

	w = 0;
	if (**tab == '*')
	{
		w = va_arg(args, int);
		(*tab)++;
	}
	else if (ft_isdigit(**tab))
		w = ft_atoi(*tab);
	return (w);
}

int		get_size(char **tab, va_list args)
{
	int s;

	s = 0;
	if (**tab == '.')
	{
		(*tab)++;
		if (**tab == '*')
		{
			s = va_arg(args, int);
			(*tab) += 2;
		}
		else if (ft_isdigit(**tab))
			s = ft_atoi(*tab);
		return (s);
	}
	else
		return (-1);
}