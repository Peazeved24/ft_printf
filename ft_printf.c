/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:37 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/02 15:25:37 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


static int  printf_format(char format, va_list pa) //contem os formatos de cada caso.
{
    int count;
    char *str;

    count  = 0;

    if(format == 'c') // format for c (char) == printar me char.
        count += ft_putchar(va_arg(pa, int), 1);
    else if(format == 's')
        count += ft_putstr_fd(va_arg(pa, char *), 1);
    else if(format == '%')
        ft_putchar('%', 1);
    else if(format == 'd' || format == 'i')
    {
        str = ft_itoa(va_arg(pa, int));
        count += ft_putstr_fd(str, 1); 
        free(str);
    }
    else if(format == 'u')
        count += ft_putnbr(va_arg(pa, unsigned int));
    else if(format == 'x')
        count += ft_hexa(va_arg(pa, unsigned int));
    else if(format  == 'X')
        count += ft_hexaUp(va_arg(pa, unsigned int));
    return count;
}
 
int	ft_printf(const char *format, ...)
{
    va_list pa;
    int count;

    va_start(pa, format);
    count = 0;

    while(*format)
    {
        if(*format == '%') // primeiro o FS.
            count += printf_format(*(++format), pa); // da me o valor a FRENTE DO FS.
        else
            count += write(1, format, 1);
        format++;
    }
    va_end(pa);

    return count;
}

int main()
{
    ft_printf("%c", 'a');
    printf("\n");
    ft_printf("%s", "ola");
    printf("\n");
    ft_printf("%d", -123);
    printf("\n");
    ft_printf("%i", 123);
    printf("\n");
    ft_printf("%u", -1);
    printf("\n");
    ft_printf("%x", -1);
    printf("\n");
    ft_printf("%X", 255);
    printf("\n");
    ft_printf("%%");
    return 0;
}


