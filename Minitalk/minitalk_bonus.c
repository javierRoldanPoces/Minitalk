/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:47:22 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/22 09:43:49 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_strlen(const char *s)
{	
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putnbr(int n)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putchar((i % 10) + 48);
	}
	if (i <= 9)
	{
		ft_putchar(i + '0');
	}
}
