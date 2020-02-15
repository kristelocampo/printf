/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:22:53 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/11 14:28:20 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countw(char *str)
{
	int		words;

	words = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\n' || *str == '\t')
			str++;
		if (*str != ' ' || *str != '\n' || *str != '\t')
			words++;
		while (*str && *str != ' ' && *str != '\n' && *str != '\t')
			str++;
	}
	return (words);
}
