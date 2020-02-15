/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:30:59 by krisocam          #+#    #+#             */
/*   Updated: 2020/02/15 20:03:59 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct	s_param
{
	int		minus;
	int		zero;
	int		width;
	int		size;
}				t_param;

int				ft_printf(const char *format, ...);
int				handle_format(char **tab, va_list args);
int				handle_type(char type, va_list args, t_param param);

void			get_flag(char **tab, t_param *param);
int				get_width(char **tab);
int				get_size(char **tab);

long int		get_char(char c, t_param param);
long int		get_str(char *str, t_param param);
long int		get_int(long nb, t_param param);

void			init(t_param *param);
void			putcharn(char ch, int size);
long int		ft_abs(long int a);
long int		ft_min(long int a, long int b);
long int		ft_max(long int a, long int b);
#endif