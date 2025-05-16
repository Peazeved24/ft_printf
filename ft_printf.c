/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:37 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/16 17:28:14 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	printf_format(char format, va_list pa)
{
	int		count;
	char	*str;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(pa, int));
	else if (format == 's')
		count += ft_putstr(va_arg(pa, char *));
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 'd' || format == 'i')
	{
		str = ft_itoa(va_arg(pa, int));
		count += ft_putstr(str);
		free(str);
	}
	else if (format == 'u')
		count += ft_putunsnbr(va_arg(pa, unsigned int));
	else if (format == 'x')
		count += ft_hexa(va_arg(pa, unsigned int));
	else if (format == 'X')
		count += ft_hexaup(va_arg(pa, unsigned int));
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

/*int main()
{
    
    ft_printf("ft_printf:%c", 'a');
    printf("\n");
	printf("printf %c", 'a');
	printf("\n");
    ft_printf("ft_printf:%s", "ola");
    printf("\n");
	printf("printf %s", "ola");
	printf("\n");
    ft_printf("ft_printf:%d", -123);
    printf("\n");
	printf("printf %d", -123);
	printf("\n");
    ft_printf("ft_printf:%i", 123);
    printf("\n");
	printf("printf %i",123);
	printf("\n");
    ft_printf("ft_printf:%u", -1);
	printf("\n");
	printf("printf %u", -1);
    printf("\n");
    ft_printf("ft_printf: %x", 255);
    printf("\n");
	printf("printf : %x", 255);
	printf("\n");
    ft_printf("ft_printf:%X", 255);
    printf("\n");
	printf("printf:%X", 255);
	printf("\n");
    ft_printf("ft_printf:%%");
    printf("\n");
	printf("printf %%");
	printf("\n");
    ft_printf("ft_print ptr = %p", NULL);
    printf("\n");
    printf(" printf ptr =  %p", NULL);
    printf("\n");

    return 0;
}*/