/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 11:33:24 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/12 11:34:26 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	whilecol(int x, int y, int row)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if ((row == 1 && col == 1) || ((row == y && col == x)
				&& (y > 1 && x > 1)))
		{
			ft_putchar('A');
		}
		else if ((row == 1 && col == x) || (row == y && col == 1))
		{
			ft_putchar('C');
		}
		else if ((col == 1 || col == x) || (row == 1 || row == y))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	while (row <= y && x > 0)
	{
		whilecol(x, y, row);
		row++;
		ft_putchar('\n');
	}
}
