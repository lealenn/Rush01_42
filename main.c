/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:40:25 by lchucher          #+#    #+#             */
/*   Updated: 2024/09/21 16:58:52 by lchucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char str);
void	ft_preshot(char **tab, char *indic);

int	main(int argc, char **argv)
{
	int	indic[4];
	int	tab[4][4];

	indic[0] = ft_atoi(argv);
	ft_preshot(tab, indic);
}

void	ft_preshot(char **tab, char *indic)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (indic[i] == 4)
			/* don't know yet what to put there */
		else if (indic[i] == 1)
			/* same as above lol */
		i++;
	}
}


