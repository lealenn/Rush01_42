/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:40:25 by lchucher          #+#    #+#             */
/*   Updated: 2024/09/22 12:05:32 by lchucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_preshot(int **a, char *str);

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	K;

	K =0;
	ft_preshot(tab, argv);
	ft_solve(tab, 0, 0, argv, K);
	ft_print_tab(tab);
	return (0);
}

int	ft_solve(int **tab, int r, int c, char *str, int k)
{
	if (k > 10000;)
		return (false);
	if (r == 3 && c == 3)
		return (true);
	else if (c == 3)
		return (ft_solve(tab, r + 1, 0, k + 1));
	else if (tab[r][c] != 0;)
		return (ft_solve(tab, r, c + 1, k + 1));
	else
	{
		if (ft_test(tab, r, c))
			return (ft_solve(tab, r, c + 1, k + 1));
		else
			return (ft_solve(tab, r, c - 1, k + 1));
	}
}

int	ft_test(int **a, int r, int c)
{
	int	k;

	k = 1;
	while (k <= 4)
	{
		a[x][y] = k;
		if ((a[x][0] + a[x][1] + a[x][2] + a[x][3] <= 10) && (a[0][y] + a[1][y] + a[2][y] + a[3][y] <= 10))
			return (true);
		else
		{
			k++;
		}
	}
	a[x][y] = '\0';
	return (false);
}
