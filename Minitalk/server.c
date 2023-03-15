/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/15 17:30:55 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler_server(int sig)
{
	static int	bit = 0;
	static int	i = 0;

	if (sig == SIGUSR1)    // esto es lo que esta fallando
	{
		//signal(sig, handler_server);
		//printf("\nsignal SIGSUR1\n");
		//printf("\nEntra en SIGSUR1");
		i |= (0x01 << bit);
	}
	bit++;
	//printf("\n Señal recibida %d. bit: %d", sig, bit);
	if (bit == 8)
	{
		//printf("\neNtra_Juanito");
		printf("%c\n", i);
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
		printf("\nERROR DEMASIADOS PARAMATROS\n");
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