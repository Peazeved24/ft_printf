/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:27:13 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/02 15:27:13 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_putstr_fd(char *str, int fd)
{
    if(!str)
        return 0;
    return write(fd, str, ft_strlen(str));
}