/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jglacon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:31:34 by jglacon           #+#    #+#             */
/*   Updated: 2024/09/21 17:42:33 by jglacon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_putchar(char c);

int	ft_print_tab(tab)
{
	int	row;
	int	col;
	
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			write(1, tab[row][col], 1);
		}
	}
}
