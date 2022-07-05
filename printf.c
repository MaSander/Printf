/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:37:44 by msander-          #+#    #+#             */
/*   Updated: 2022/07/04 23:42:02 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
# include <stdio.h>

int convert(char type, va_list lst)
{
	if (type == 'c')
		return char_writer(va_arg(lst, int));
	if (type == 's')
		return string_writer(va_arg(lst, char *));
	if (type == 'p')
		return pointer_writer((int)va_arg(lst, void *));
	// if (type == 'i' || type == 'd')
	// 	return printf("%c", va_arg(lst, char *));
	// if (type == 'u')
	// 	return printf("%c", va_arg(lst, char *));
	// if (type == 'X' || type == 'x')
	// 	return printf("%c", va_arg(lst, char *));
	if (type == '%')
		return char_writer('%');
	return (0);
}

int ft_printf(const char *string, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, string);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			i += convert(*string, ap);
		}
		else
		{
			write(STDOUT_FILENO, string, 1);
			i++;
		}
		string++;
	}
	va_end(ap);
	return (i);
}
