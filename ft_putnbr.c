/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:07:13 by peazeved          #+#    #+#             */
/*   Updated: 2025/06/09 17:18:54 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_putnbr(long n)
{
	int	count;

	count = 0;

	if (n > INT_MAX  || n < INT_MIN)
		return 0;
	if (n == INT_MIN)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
