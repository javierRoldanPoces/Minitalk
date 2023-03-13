/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/13 10:14:08 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int cont = 0;

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
