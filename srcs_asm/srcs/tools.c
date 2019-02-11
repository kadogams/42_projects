/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:46:24 by dazheng           #+#    #+#             */
/*   Updated: 2019/02/11 13:29:59 by dazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int	skip_whitespace(char *str)
{
	int	i;

	i = 0;
	if (!str)
		quit(NULL);
	while (str && str[i])
	{
		if (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		{
			i++;
			continue ;
		}
		break ;
	}
	return (i);
}
