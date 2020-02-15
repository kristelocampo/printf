/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:36:15 by krisocam          #+#    #+#             */
/*   Updated: 2019/11/14 16:15:27 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		separator(char const str, char ch)
{
	if (str == ch)
		return (1);
	return (0);
}

static int		word_count(char const *str, char ch)
{
	int		i;
	int		count_word;

	i = 0;
	count_word = 0;
	while (str[i])
	{
		if ((!separator(str[i], ch) && separator(str[i - 1], ch)) ||
				(!separator(str[i], ch) && i == 0))
			count_word++;
		i++;
	}
	return (count_word);
}

static int		*word_size(char const *str, char ch)
{
	int		i;
	int		index;
	int		count_word;
	int		*size_word;

	i = 0;
	count_word = word_count(str, ch);
	if (!(size_word = malloc(sizeof(int) * count_word)))
		return (0);
	while (i <= count_word)
		size_word[i++] = 0;
	i = 0;
	index = 0;
	while (str[i])
	{
		if (!separator(str[i], ch))
			size_word[index]++;
		else if (i > 0 && !separator(str[i - 1], ch))
			index++;
		i++;
	}
	return (size_word);
}

static char		**cal_split(char const *str, char ch, char **split)
{
	int		i;
	int		j;
	int		in;
	int		*size_word;

	size_word = word_size(str, ch);
	i = -1;
	j = 0;
	in = 0;
	while (str[++i])
	{
		if (!separator(str[i], ch))
		{
			if (i == 0 || (!separator(str[i], ch) && separator(str[i - 1], ch)))
				split[in] = malloc(sizeof(char) * size_word[in]);
			split[in][j] = str[i];
			split[in][++j] = '\0';
		}
		else if (i > 0 && !separator(str[i - 1], ch) && ++in)
			j = 0;
	}
	split[word_count(str, ch)] = 0;
	return (split);
}

char			**ft_split(char const *str, char ch)
{
	char	**split;

	if (!str)
		return (NULL);
	if (!(split = malloc(sizeof(char *) * (word_count(str, ch) + 1))))
		return (NULL);
	return (cal_split(str, ch, split));
}
