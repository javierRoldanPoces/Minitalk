/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:59:31 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/09 12:34:42 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <sys/types.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *s);
int		ft_atoi(const char *str);
void	recursive_binary(int x);
void	ft_putnbr(int n);

#endif
//quitar libreria stdio