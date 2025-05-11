/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:03:24 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/11 16:17:58 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned int	ft_putunsnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putunsnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
