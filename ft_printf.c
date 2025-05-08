/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:25:37 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/08 16:38:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


static int  printf_format(char format, va_list pa) //contem os formatos de cada caso.
{
    int count;
    char *str;

    count  = 0;

    if(format == 'c') // format for c (char) == printar me char.
        count += ft_putchar(va_arg(pa, int));
    else if(format == 's')
        count += ft_putstr(va_arg(pa, char *));
    else if(format == '%')
        ft_putchar('%');
    else if(format == 'd' || format == 'i')
    {
        str = ft_itoa(va_arg(pa, int));
        count += ft_putstr(str); 
        free(str);
    }
    else if(format == 'u')
        count += ft_putunsnbr(va_arg(pa, unsigned int));
    else if(format == 'x')
        count += ft_hexa(va_arg(pa, unsigned int));
    else if(format  == 'X')
        count += ft_hexaUp(va_arg(pa, unsigned int));
    else if(format == 'p')
        count += ft_putptr(va_arg(pa, void *));
    return count;
}

int	ft_printf(const char *format, ...)
{
    va_list pa; // minha variavel 
    int count; // count numero de digitos passados.

    va_start(pa, format);
    count = 0;

    while(*format) // format == string 
    {
        if(*format == '%') // primeiro o FS.
            count += printf_format(*(++format), pa); // da me o valor a FRENTE DO FS.
        else
            count += write(1, format, 1); // se ele n encontrar , retorna me format.
        format++;
    }
    va_end(pa); // free pa.

    return count;
}

int main()
{
    int a= 19;
    int *ptr = &a;
    
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
    printf("\n");
    ft_printf("ft_print = %p", &ptr);
    printf("\n");
    printf("ptr = %p", &ptr);
    printf("\n");

    return 0;
}


