/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:37:44 by msander-          #+#    #+#             */
/*   Updated: 2022/06/30 00:28:55 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

int convert(char *type, va_list obj)
{
    if(*type == 'c')
        printg("%c", va_arg(obj, char *))
    if(*type == 's')
        printg("%c", va_arg(obj, char *))
    if(*type == 'p')
        printg("%c", va_arg(obj, char *))
    if(*type == 'd')
        ft_putnbr_fd(int n, int fd)
    if(*type == 'i')
        printg("%c", va_arg(obj, char *))
    if(*type == 'u')
        printg("%c", va_arg(obj, char *))
    if(*type == 'x')
        printg("%c", va_arg(obj, char *))
    if(*type == 'X')
        printg("%c", va_arg(obj, char *))
    if(*type == '%')
        printg("%c", va_arg(obj, char *))

}

int ft_printf(const char *string, ...)
{
    int i;
    va_list ap;


    i = 0;
    va_start(ap, string);
    while(*string)
    {
        if (*string == '%')
        {
            i += convert(string++, ap);
        } else
        {
            i++;
        }

        string++;
    }
    va_end(ap);
    return (i);
}
