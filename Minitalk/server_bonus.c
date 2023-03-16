/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/16 19:48:10 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler_server(int sig)
{
	static int	bit = 0;
	static int	i = 0;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &i, 1);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_putstr("ERROR: demasiado parámetros.....\n");
		return (1);
	}
	pid = getpid();
	ft_putnbr(pid);
	ft_putstr("\n");
	while (argc == 1)
	{
		signal(SIGUSR1, handler_server);
		signal(SIGUSR2, handler_server);
		pause ();
	}
	return (0);
}
