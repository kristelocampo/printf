/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:54:36 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/06 21:08:40 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*s2;

	if (s1 && f)
	{
		i = 0;
		len = ft_strlen((char *)s1);
		if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s1[i])
		{
			s2[i] = f(i, s1[i]);
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}
