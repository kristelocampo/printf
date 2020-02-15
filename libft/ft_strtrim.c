/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:52:26 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/12 17:32:31 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		sep(char const *str, char ch)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

static size_t	len_trim(char const *s1, char const *set)
{
	int i;
	int j;
	int len;

	i = 0;
	while (s1[i] && sep(set, s1[i]))
		i++;
	if (i == (int)ft_strlen(s1))
		return (0);
	len = ft_strlen(s1) - i;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (i && sep(set, s1[i]))
	{
		i--;
		j++;
	}
	len = len - j;
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = 0;
	len = len_trim(s1, set);
	if (len == 0)
		return (ft_calloc(sizeof(char), 1));
	if (!(str = ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	while (sep(set, s1[i]))
		i++;
	while (j < len)
	{
		str[j] = s1[i + j];
		j++;
	}
	return (str);
}
