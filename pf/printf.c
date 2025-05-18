/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:14:40 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/18 14:06:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


static int ft_printformat(char format, va_list pa)
{
    int count;
    char *str;

    if(format == 'c')
        count += ft_putchar(va_arg(pa, int));
    else if(format == 's')
        count += ft_putstr(va_arg(pa, char *));
    else if(format == 'i' || format == 'd')
    {
        str = ft_itoa(va_arg(pa, int));
        count += ft_putstr(str);
        free(str);
    }
    else if(format == '%')
        count += ft_putchar('%');
    else if(format == 'u')
        count += ft_putunsnum(va_arg(pa, unsigned int));
    if (format == 'x' || format == 'X')
        count += ft_hexa(va_arg(pa, size_t), format == 'x');
    else if(format == 'p')
        count += ft_putptr(va_arg(pa, void *));

}

int ft_printf(const char *format, ...)
{
    va_list pa;
    int count;

    count = 0;
    if(!format)
        return (-1);
    va_start(pa, format);
    while(*format)
    {
        if(*format == '%')
            count += ft_printformat(*(++format), pa);
        else
            count += write(1, format, 1);
        format++;
    }
    va_end(pa);
    return (count);
}

int main()
{
    int i = 0;
    int *ptr = &i;
    ft_printf("minha: %i", 19);
    printf("\n");
    printf("dele: %i", 19);
    printf("\n");
    ft_printf("minha: %p",ptr);
    printf("\n");
    printf("minha: %p",ptr);
    return 0;   
}
