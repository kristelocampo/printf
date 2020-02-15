/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:59:37 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/12 15:51:25 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s1 == '\0' && s2 == '\0')
		return (NULL);
	while (n)
	{
		*s1++ = *s2++;
		n--;
	}
	return (dest);
}
