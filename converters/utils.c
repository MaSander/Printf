/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:23:38 by msander-          #+#    #+#             */
/*   Updated: 2022/07/18 22:05:13 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	lengh;

	lengh = 0;
	while (*c)
	{
		lengh++;
		c++;
	}
	return (lengh);
}

static	int	ft_deciamichouselen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			strlen;
	long		num;
	int			isnegative;
	char		*result;

	num = n;
	isnegative = 0;
	if (num < 0)
	{
		isnegative++;
		num = (num * -1);
	}
	strlen = (ft_deciamichouselen(n) + isnegative);
	result = malloc(strlen + 1);
	if (!result)
		return (NULL);
	result[strlen] = '\0';
	if (isnegative)
		result[0] = '-';
	while (strlen-- > isnegative)
	{
		result[strlen] = ((num % 10) + '0');
		num = (num / 10);
	}
	return (result);
}
