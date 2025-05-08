/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:27:13 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/08 16:02:41 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_putstr(char *str)
{
    if(!str)
        return (-1);
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}