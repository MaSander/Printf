/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:16:53 by msander-          #+#    #+#             */
/*   Updated: 2022/07/20 19:50:42 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTERS_H
# define CONVERTERS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(const char *c);
char	*ft_itoa(long n);
int		char_writer(int c);
int		string_writer(char *str);
int		pointer_writer(void *p);
int		number_writer(int number);
int		unsigned_num_writer(unsigned int number);
int		hexadecimal_writer(unsigned long num, int isupercase);
void	*ft_calloc(size_t num, size_t size);

#endif
