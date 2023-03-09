/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:47:22 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/09 15:54:20 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(const char *s)
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

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{	
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

void	recursive_binary(int x)
{
	if (x != 0)
	{
		recursive_binary(x / 2);
		printf("%i", x % 2);
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
