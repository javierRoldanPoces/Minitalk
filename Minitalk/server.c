/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/14 10:46:24 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler_server(int sig)
{
	static int	bit;
	static int	i;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		printf("%c", i);
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
		printf("Error\n");
		return (1);
	}
	pid = getpid();
	printf("%d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, handler_server);
		signal(SIGUSR2, handler_server);
		pause ();
	}
	return (0);
}
/*int cont = 0;

void	handler_server( int sig);

int	main(int argc, char *argv[])
{
	int		a;
	char	*name;

	a = argc;
	name = argv[0];
	write(1, "\nServer PID = ", 14);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	return (0);
}
*/