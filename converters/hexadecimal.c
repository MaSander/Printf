/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:39:57 by msander-          #+#    #+#             */
/*   Updated: 2022/07/18 22:34:13 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.h"

static char char_hexadecimal(int c, int isupercase)
{
	if (c <= 9)
		return ('0' + c);
	if (isupercase)
		return (55 + c);
	return (87 + c);
}

static char *add_char_front(char *str, char c)
{
	char	*result;
	int		len;

	if (!str)
	{
		result = malloc(2);
		result[0] = c;
		result[1] = '\0';
		return result;
	}
	len = ft_strlen(str);
	result = malloc(len + 2);
	result[0] = c;
	result[len] = '\0';
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

	hexa = 0;
	result = num;
	while (result > 16)
	{
		result = result / 16;
		rest = num - (result * 16);
		num = result;
		hexa = add_char_front(hexa, char_hexadecimal(rest, isupercase));
	}
	return string_writer(hexa);
}
