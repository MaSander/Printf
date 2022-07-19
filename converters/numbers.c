/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:27:00 by msander-          #+#    #+#             */
/*   Updated: 2022/07/06 22:25:08 by msander-         ###   ########.fr       */
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
	return (writelen);
}

int	unumber_writer(int number)
{
	char	*str;
	int		i;
	int		writelen;

	i = 0;
	writelen = 0;
	str = ft_itoa(number);
	if (str)
	{
		while (str[i])
		{
			if (str[i] >= '0' || str[i] <= '9')
				writelen += char_writer(str[i]);
			i++;
		}		
	}
	free(str);
	return (writelen);
}
