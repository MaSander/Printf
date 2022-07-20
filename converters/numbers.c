/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:27:00 by msander-          #+#    #+#             */
/*   Updated: 2022/07/20 19:58:43 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.h"

int	number_writer(int number)
{
	char	*str;
	int		writelen;

	writelen = 0;
	str = ft_itoa(number);
	if (str)
		writelen = string_writer(str);
	free(str);
	str = 0;
	return (writelen);
}

int	unsigned_num_writer(unsigned int number)
{
	char	*str;
	int		writelen;

	writelen = 0;
	str = ft_itoa((unsigned int)number);
	if (str)
		writelen = string_writer(str);
	free(str);
	str = 0;
	return (writelen);
}
