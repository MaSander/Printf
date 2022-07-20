/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:23:33 by msander-          #+#    #+#             */
/*   Updated: 2022/07/20 00:14:14 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	string_writer(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (string_writer("(null)"));
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	return (i);
}
