/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhurnik <hhurnik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:43:45 by hhurnik           #+#    #+#             */
/*   Updated: 2024/07/26 21:14:45 by hhurnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//sends signal to the process with pid
void	send_sig(pid_t pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (((c >> i) & 1) == 1)
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		usleep(100);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	pid_t	pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("Usage: %s <pid> <string>\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	while (*str)
	{
		send_sig(pid, *str);
		str++;
	}
	send_sig(pid, '\n');
	send_sig(pid, '\n');
	return (0);
}