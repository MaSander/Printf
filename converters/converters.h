/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:16:53 by msander-          #+#    #+#             */
/*   Updated: 2022/07/18 22:34:27 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTERS_H
# define CONVERTERS_H
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *c);
char	*ft_itoa(int n);
int		char_writer(int c);
int		string_writer(char *str);
int		pointer_writer(void *p);
int		number_writer(int number);
int		unumber_writer(int number);
int		hexadecimal_writer(long num, int isupercase);

#endif
