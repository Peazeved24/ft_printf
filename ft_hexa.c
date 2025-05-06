/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:48:17 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/06 16:48:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "printf.h"

unsigned int ft_hexa(unsigned int n) 
{
    char hex_digits[] = "0123456789abcdef";
    int count = 0;

    if (n >= 16)
        count += ft_hexa(n / 16); 
    count += ft_putchar(hex_digits[n % 16], 1); 

    return count;
}