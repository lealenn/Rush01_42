/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preshot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:09:01 by amalangu          #+#    #+#             */
/*   Updated: 2024/09/21 19:31:03 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   ft_1or4up(int x, int y, int **a, char *str, int i)
{
        while (i <= 6)
        {
              if (str[i] == '4')
              {
                  a[x][y] = 1;
                  y++;
                  i = i + 2;
              }
              else if (str[i] == '1')
              {
                  a[x][y] = 4;
                  y++;
                  i = i + 2;
              }
              else 
              {
                  i = i + 2;
                  y++;
              }
        }
        return (i);
}

int   ft_1or4down(int x, int y, int **a, char *str, int i)
{
	x = 3;
        while (i <= 14)
        {
              if (str[i] == '4')
              {
                  a[x][y] = 1;
                  y++;
                  i = i + 2;
              }
              else if (str[i] == '1')
              {
                  a[x][y] = 4;
                  y++;
                  i = i + 2;
              }
              else 
              {
                  i = i + 2;
                  y++;
              }
        }
        return (i);
}

int   ft_1or4left(int x, int y, int **a, char *str, int i)
{
        while (i <= 22)
        {
              if (str[i] == '4')
              {
                  a[x][y] = 1;
                  x++;
                  i = i + 2;
              }
              else if (str[i] == '1')
              {
                  a[x][y] = 4;
                  x++;
                  i = i + 2;
              }
              else 
              {
                  i = i + 2;
                  x++;
              }
        }
        return (i);
}

int   ft_1or4right(int x, int y, int **a, char *str, int i)
{
	y = 3;
        while (i <= 30)
        {
              if (str[i] == '4')
              {
                  a[x][y] = 1;
                  y++;
                  i = i + 2;
              }
              else if (str[i] == '1')
              {
                  a[x][y] = 4;
                  y++;
                  i = i + 2;
              }
              else 
              {
                  i = i + 2;
                  y++;
              }
        }
        return (i);
}

int	ft_preshot(int **a, char *str)
{
	int i = 0;
	int x = 0;
	int y = 0;
	i = ft_1or4up(x, y, a, str, i);
	i = ft_1or4down(x, y, a, str, i);
	i = ft_1or4left(x, y, a, str, i);
	i = ft_1or4right(x, y, a, str, i);
}

int	main(void)
{
	str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
}
