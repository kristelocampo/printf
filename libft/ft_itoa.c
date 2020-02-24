/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:44:37 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/24 14:47:48 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_size(int n)
{
	unsigned int size;
	unsigned int nb;

	size = 0;
	if (n <= 0)
	{
		size++;
		nb = -n;
	}
	else
		nb = n;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char		*calc(int n, int sign)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = ft_calloc(sizeof(char), (nb_size(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n)
	{
		dest[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	if (sign == -1)
	{
		dest[i] = '-';
		i++;
	}
	ft_strrev(dest);
	dest[i] = '\0';
	return (dest);
}

char			*ft_itoa(long int n)
{
	int		sign;

	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (calc(n, sign));
}
