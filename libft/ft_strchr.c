/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:16:45 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/06 13:31:59 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int	len;

	i = 0;
	len = ft_strlen(str) + 1;
	while (i < len)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
		i++;
	}
	return (NULL);
}
