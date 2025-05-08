/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaUp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:48:17 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/08 16:38:00 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "printf.h"

int ft_hexaUp(size_t n) 
{
    char hex_digitsUp[] = "0123456789ABCDEF";
    int count = 0;

    if (n >= 16)
        count += ft_hexaUp(n / 16); 
    count += ft_putchar(hex_digitsUp[n % 16]); 

    return count;
}