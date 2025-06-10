/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:37 by peazeved          #+#    #+#             */
/*   Updated: 2025/06/09 17:25:59 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_format(char format, va_list pa)
{
	int		count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(pa, int));
	else if (format == 's')
		count += ft_putstr(va_arg(pa, char *));
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(pa, int));
	else if (format == 'u')
		count += ft_putunsnbr(va_arg(pa, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_hexa(va_arg(pa, unsigned int), format == 'x');
	else if (format == 'p')
		count += ft_putptr(va_arg(pa, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	pa;
	int		count;
	
	if (!format)
		return (-1);
	va_start (pa, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += printf_format(*(++format), pa);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(pa);
	return (count);
}

int main()
{
	
	ft_printf("ft_printf: %d", 2147483648);
	printf("\n");

}
