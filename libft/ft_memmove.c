/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:07:24 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/06 14:15:51 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	i;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	if (s1 == '\0' && s2 == '\0')
		return (NULL);
	if (s2 < s1)
	{
		while (++i <= len)
			s1[len - i] = s2[len - i];
	}
	else
		while (len)
		{
			*s1++ = *s2++;
			len--;
		}
	return (dest);
}
