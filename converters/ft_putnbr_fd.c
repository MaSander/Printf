/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:14:32 by msander-          #+#    #+#             */
/*   Updated: 2022/06/30 00:32:35 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		writeLen;

	nbr = n;
	writeLen = 0;
	if (nbr < 0)
	{
		writeLen += ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		writeLen += ft_putnbr_fd((nbr / 10), fd);
		writeLen += ft_putnbr_fd((nbr % 10), fd);
	}
	else if (nbr <= 9)
		writeLen += ft_putchar_fd((nbr + '0'), fd);
	return (writeLen);
}
