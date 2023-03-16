/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:27:06 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/16 20:13:09 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	countdigit(long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count++;
		return (count);
	}
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nlong;
	char	*s;
	int		i;

	nlong = n;
	i = countdigit(nlong);
	s = (char *)malloc(sizeof (char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	i--;
	if (nlong == 0)
		s[0] = '0';
	if (nlong < 0)
	{
		s[0] = '-';
		nlong = nlong * -1;
	}
	while (i >= 0 && nlong != 0)
	{
		s[i] = (nlong % 10) + '0';
		nlong = nlong / 10;
		i--;
	}
	return (s);
}

static int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

void	handler_client(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}
// podemos usar el struct de sig_action leer sobre el tema
void	handler_client_pid(int pid, char *pid_client)
{
	int	i;

	i = 0;
	while (pid_client[i] != '\0')
	{
		while (i < 8)
		{
			if ((pid_client[i] & (1 << i)))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*pid_client;
	int		i;

	i = 0;
	ft_putnbr(getpid());
	ft_putstr("\n");
	pid_client = ft_itoa(getpid());
	handler_client_pid(pid, pid_client);
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			handler_client(pid, argv[2][i]);
			i++;
		}
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
