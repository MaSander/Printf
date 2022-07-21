/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:23:51 by msander-          #+#    #+#             */
/*   Updated: 2022/07/20 20:19:23 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.h"

int	pointer_writer(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (string_writer("(nil)"));
	if (p)
	{
		count += string_writer("0x");
		count += hexadecimal_long_writer((unsigned long)p, 0);
	}
	return (count);
}
