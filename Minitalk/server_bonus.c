/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/21 13:32:55 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include <signal.h>

void	handler_server(int sig, siginfo_t *info, void *context)
{
	static int	bit = 0;
	static int	i = 0;

	(void)info;
	(void)context;
	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &i, 1);
		bit = 0;
		i = 0;
		kill(info->si_pid, SIGUSR1);
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	struct sigaction	sig;

	(void)argv;
	if (argc != 1)
	{
		ft_putstr("ERROR: demasiado parámetros.....\n");
		return (1);
	}
	pid = getpid();
	ft_putnbr(pid);
	ft_putstr("\n");
	sig.emptyset(&sig.sa_mask);

	while (argc == 1)
	{
		signal(SIGUSR1, handler_server);
		signal(SIGUSR2, handler_server);
		pause ();
	}
	return (0);
}
