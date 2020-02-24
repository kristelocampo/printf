/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_type2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:35:41 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/24 15:54:44 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char    *convert(long int nb, char *base)
{
    char					*s;
	int						i;
	int						bsize;
	unsigned long long int	nbr;

	i = 0;
	bsize = ft_strlen(base);
	nbr = nb;
	while ((nbr /= bsize) >= 1)
		i++;
	i++;
	if ((!(s = ft_calloc(sizeof(char), (i + 1)))))
		return (0);
	while (i--)
	{
		s[i] = base[nb % bsize];
		nb /= bsize;
	}
	return (s);
}

long int    get_hex(long int nb, t_param param, char *base)
{
    char        *tmp;
    int         zero;
    int         space;
    long int    i;

    if (nb == 0 && param.size == 0)
        tmp = ft_calloc(1, sizeof(char));
    else
        tmp = convert(nb, base);
    i = ft_strlen(tmp);
    zero = 0;
    space = 0;
    if (ft_abs(param.size) > i && param.size > 0)
        zero = ft_abs(param.size) - i;
    if (param.zero && ft_abs(param.width) > param.size && param.size < 0)
        zero = ft_abs(param.width) - i;
    if (ft_abs(param.width) > zero + (int)i)
        space = ft_abs(param.width) - (i + zero);
    else
        space = 0;
    if (param.size < 0 && param.width < 0)
    {
        space = ft_max(space, zero);
        zero = 0;
    }
    putcharn(' ', ((!param.minus && param.width >= 0) ? space : 0));
    putcharn('0', ((param.width > 0 || param.size > 0) ? zero : 0));
    ft_putstr_fd(tmp, 1);
    putcharn(' ', ((param.minus || ft_abs(param.width) < 0) ? space : 0));
    free (tmp);
    return (i + (zero > 0 ? zero : 0) + (space > 0 ? space : 0));
}

long int   get_ptr(void *ptr, t_param param)
{
    char        *tmp;
    int         space;
    int         zero;
    long int    i;

    tmp = convert((long int)ptr, "0123456789abcdef");
    tmp = ft_strjoin("0x", tmp);
    i = ft_strlen(tmp);
    if (param.size > (int)i)
        zero = param.size - i;
    else
        zero = 0;
    if (param.width > (int)i + zero)
        space = param.width - (i + zero);
    else
        space = 0;
    if (!param.minus)
        putcharn(' ', space);
    putcharn('0', zero);
    ft_putstr_fd(tmp, 1);
    if (param.minus)
        putcharn(' ', space);
    free(tmp);
    return (i + zero + space);
}