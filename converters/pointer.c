/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:23:51 by msander-          #+#    #+#             */
/*   Updated: 2022/07/18 22:36:22 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.h"

int	pointer_writer(void *p)
{
	int	count;

	count = 0;
	if (p)
	{
		count = hexadecimal_writer((long)&p, 0);
		count = string_writer("0x7");
	}
	return (count);
}
