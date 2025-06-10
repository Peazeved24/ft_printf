/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:48:17 by peazeved          #+#    #+#             */
/*   Updated: 2025/06/06 15:06:31 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(size_t n, int s)
{
	char	*hex_digits;
	int		count;

	count = 0;
	if (s == 1)
		hex_digits = "0123456789abcdef";
	else if (s == 0)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (n >= 16)
		count += ft_hexa(n / 16, s);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}
