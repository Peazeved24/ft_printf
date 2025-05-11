/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:44 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/11 16:14:53 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_printf(const char *format, ...);
int					ft_putstr(char *str);
char				*ft_itoa(int n);
unsigned int		ft_putunsnbr(unsigned int n);
int					ft_putchar(int c);
int					ft_strlen(char *str);
int					ft_hexa(size_t n);
int					ft_hexaup(size_t n);
int					ft_putptr(void *ptr);

#endif
