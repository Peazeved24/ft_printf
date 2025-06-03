/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:44 by peazeved          #+#    #+#             */
/*   Updated: 2025/06/03 20:05:58 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_printf(const char *format, ...);
int					ft_putstr(char *str);
unsigned int		ft_putunsnbr(unsigned int n);
int					ft_putchar(int c);
int					ft_strlen(char *str);
int					ft_hexa(size_t n, int s);
int					ft_putptr(void *ptr);
int					ft_putnbr(int n);

#endif
