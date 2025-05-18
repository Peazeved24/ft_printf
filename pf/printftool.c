/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftool.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:06:32 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/18 14:03:18 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

int ft_putstr(char *str)
{
    if(!str)
        return (-1);
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}

unsigned int ft_putunsnum(unsigned int n)
{
    int count;

    count = 0;
    if (n > 9)
        count += ft_putunsnum(n / 10);
    count += ft_putchar(n % 10 + '0');
    return (count);
}

int ft_hexa(size_t n, int s)
{
    char *hexa;
    int count;

    count = 0;
    if (s == 1)
        hexa = "0123456789abcdef";
    else if (s == 0)
        hexa = "0123456789ABCDEF";
    
    if (n >= 16)
        count += ft_hexa(n / 16, s);
    count += ft_putchar(hexa[n % 16]);
    return (count);
}

int ft_putptr(void *ptr)
{
    int count;
    int aux; 

    count = 0;
    aux = 0;
    if(!ptr)
        return (ft_putstr("(nil"));
    if(ft_putstr("0x") == -1)
        return (-1);
    count += 2;
    aux = ft_hexa((size_t)ptr, 1);
    if (aux == -1)
        return (-1);
    count += aux;
    return (count);
}

static int ft_cd(int n)
{
    int len = (n <= 0);

    while(n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

static int ft_abs(int n)
{
    if(n < 0)
        n = -n;
    return (n);
}

char *ft_itoa(int n)
{
    int i;
    int is_neg;
    int len;
    char *str;

    is_neg = (n < 0);
    len = ft_cd(n);
    str = malloc((len + 1) * sizeof(char));
    if(!str)
        return NULL;
    str[len] = '\0';
    if(is_neg)
        str[0] = '-';
    if(n == 0)
        str[0] = '0';
    else
    {
        i = len - 1;
        while(i >= is_neg)
        {
            str[i--] = ft_abs(n % 10) + '0';
            n /= 10;
        }
    }
    return (str);
}