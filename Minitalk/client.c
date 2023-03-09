/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:27:06 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/09 13:45:58 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*str;

	str = *argv;
	i = 0;
	j = 0;
	if (argc > 1)
	{
		//str = &argv[1];
		while (str[j] != 0)
		{
			i = str[j] + 32;
		}
	}
	return (0);
}
