/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:23:38 by msander-          #+#    #+#             */
/*   Updated: 2022/07/19 23:57:24 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	lengh;

	lengh = 0;
	if(!c)
		return 0;
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

char	*ft_itoa(long n)
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

static void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	size_alloc;

	size_alloc = num * size;
	if (((size_alloc / size) != num) || ((size_alloc / num) != size))
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}