/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:51:37 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/25 16:38:31 by krisocam         ###   ########.fr       */
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

int		get_width(char **tab)
{
	int i;

	i = 0;
	if (!ft_isdigit(**tab))
		return (0);
	i = ft_atoi(*tab);
	while (ft_isdigit(**tab))
		(*tab)++;
	return (i);
}

int		get_size(char **tab)
{
	int i;

	i = 0;
	if (**tab == '.')
	{
		(*tab)++;
		i = ft_atoi(*tab);
		while (ft_isdigit(**tab))
			(*tab)++;
		return (i);
	}
	else
		return (-1);
}
