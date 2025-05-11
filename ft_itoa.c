/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:47:43 by peazeved          #+#    #+#             */
/*   Updated: 2025/05/11 15:43:18 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_cd(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nlen;
	int		is_neg;
	char	*str;

	is_neg = (n < 0);
	nlen = ft_cd(n);
	str = (char *)malloc((nlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[nlen] = '\0';
	if (is_neg)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	else
	{
		i = nlen -1;
		while (i >= is_neg)
		{
			str[i--] = ft_abs(n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}
