/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:19:12 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/06 20:34:20 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*tab;

	i = 0;
	if (str == NULL)
		return (NULL);
	if (!(tab = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!(start > len))
	{
		while (str[start + i] && i < len)
		{
			tab[i] = str[start + i];
			i++;
		}
	}
	tab[i] = '\0';
	return (tab);
}
