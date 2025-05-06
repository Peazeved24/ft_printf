/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:44 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/02 15:25:44 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#   define PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int ft_putstr_fd(char *str, int fd);
char	*ft_itoa(int n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_putchar(int c, int fd);
unsigned int ft_putnbr(unsigned int n);
int ft_strlen(char *str);
unsigned int ft_hexa(unsigned int n);
unsigned int ft_hexaUp(unsigned int n);
#endif
