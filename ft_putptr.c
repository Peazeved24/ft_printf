/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:53:30 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/08 16:23:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_putptr(void *ptr)
{
    int count;
    int aux;

    count = 0;
    aux = 0;
    if(ft_putstr("0x") == -1) // if error 
        return (-1);
    count += 2;

    aux = ft_hexa((size_t)ptr); // garantir que seja numeros sem pontos e sem range negativo

    if(aux == -1)
        return (-1);
    count += aux;

    return count;
}  