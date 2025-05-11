/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:53:30 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/11 17:14:56 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(void *ptr)
{
	int	count;
	int	aux;

	count = 0;
	aux = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	if (ft_putstr("0x") == -1)
		return (-1);
	count += 2;
	aux = ft_hexa((size_t)ptr);
	if (aux == -1)
		return (-1);
	count += aux;
	return (count);
}
