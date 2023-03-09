/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:34:38 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/09 15:53:02 by Jroldan-         ###   ########.fr       */
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
	ft_putnbr(getpid());
	return (0);
}
