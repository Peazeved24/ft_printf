/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:03:36 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/18 03:57:19 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <stdarg.h> 
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_strlen(char *str);
int ft_hexa(size_t n, int s);
int ft_putptr(void *ptr);
unsigned int ft_putunsnum(unsigned int n);
char *ft_itoa(int n);
#endif