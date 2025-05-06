/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:03:24 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/06 16:03:24 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


unsigned int ft_putnbr(unsigned int n)
{
    int count;
    
    count = 0;
    if(n > 9)
    {
       count += ft_putnbr(n / 10);
    }
    count += ft_putchar(n % 10 + '0', 1);

    return count;
}