/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhurnik <hhurnik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 21:05:20 by hhurnik           #+#    #+#             */
/*   Updated: 2024/07/26 21:05:29 by hhurnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct State
{
	int	c;
	int	i;
}		t_State;

void	send_sig(pid_t pid, char c);
void	sig_user1(int sig);
void	sig_user2(int sig);

#endif