/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:17:03 by amalangu          #+#    #+#             */
/*   Updated: 2024/09/20 14:39:12 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkpn(int pn)
{
	if ((pn % 2) == 1)
		return (-1);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	pn;

	result = 0;
	pn = 0;
	i = 0;
	while (str[i])
	{
		while (((str[i]) < '0' || (str[i]) > '9') && (str[i] != '-'))
			i++;
		if (str[i] == '-')
		{
			pn++;
			i++;
		}
		while ((str[i] >= '0') && ((str[i]) <= '9'))
		{
			result = result * 10 + str[i] - '0';
			i++;
			if ((str[i] < '0') || (str[i] > '9'))
				return (ft_checkpn(pn) * result);
		}
	}
	return (ft_checkpn(pn) * result);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("dads---+--+1234ab567"));
	printf("%d", ft_atoi("--548"));
	printf("%d", ft_atoi("-+-+++-788612"));
	printf("%d", ft_atoi("567"));
}
