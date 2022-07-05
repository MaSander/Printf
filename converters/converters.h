/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:16:53 by msander-          #+#    #+#             */
/*   Updated: 2022/07/04 23:41:47 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTERS_H
# define CONVERTERS_H
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *c);
char	*ft_itoa(int n);
int     char_writer(int c);
int     string_writer(char *str);
int     pointer_writer(int p);


#endif
