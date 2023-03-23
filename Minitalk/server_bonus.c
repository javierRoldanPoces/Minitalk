/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/23 13:38:11 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler_server(int sig, siginfo_t *info, void *context)
{
	static int	bit = 0;
	static int	i = 0;

	(void)context;
	if (sig == SIGUSR1)
		i |= (1 << bit);
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
	int					pid;
	struct sigaction	signal1;

	(void)argv;
	sigemptyset(&signal1.sa_mask);
	signal1.sa_sigaction = handler_server;
	signal1.sa_flags = SA_SIGINFO;
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
		sigaction(SIGUSR1, &signal1, NULL);
		sigaction(SIGUSR2, &signal1, NULL);
		pause ();
	}
	return (0);
}
