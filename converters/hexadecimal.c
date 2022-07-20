/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:39:57 by msander-          #+#    #+#             */
/*   Updated: 2022/07/19 23:24:50 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.h"

static char	char_hexadecimal(int c, int isupercase)
{
	if (c <= 9)
		return ('0' + c);
	if (isupercase)
		return (55 + c);
	return (87 + c);
}

static char	*add_char_front(char *str, char c)
{
	char	*result;
	int		len;

	if (!str)
	{
		result = ft_calloc(2, 1);
		result[0] = c;
		return (result);
	}
	len = ft_strlen(str);
	result = ft_calloc(len + 2, 1);
	result[0] = c;
	while (len--)
	{
		result[len + 1] = str[len];
	}
	free(str);
	return (result);
}

int	hexadecimal_writer(long num, int isupercase)
{
	char	*hexa;
	long	result;
	long	rest;
	int		count;

	hexa = ft_calloc(1, 1);
	result = num;
	while (result > 16)
	{
		result = result / 16;
		rest = num - (result * 16);
		num = result;
		hexa = add_char_front(hexa, char_hexadecimal(rest, isupercase));
	}
	count = string_writer(hexa);
	free(hexa);
	return (count);
}
