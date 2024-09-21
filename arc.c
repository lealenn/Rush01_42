/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:50:27 by amalangu          #+#    #+#             */
/*   Updated: 2024/09/21 15:50:08 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char	ft_argv(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((i % 2) == 0)
		{
			if ((str[i] >= '1') && (str[i] <= '4'))
				i++;
			else
				return ("*ERROR*");
		}
		else
		{
			if (str[i] == 32)
				i++;
			else
				return ("*ERROR*");
		}
	}
	return (str);
}

int	main(int argc, char **agrv)
{
	char	*str
	*str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	ft_argv(str);
}
