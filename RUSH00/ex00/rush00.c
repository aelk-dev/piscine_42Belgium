/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 11:19:04 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/12 11:47:07 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	whilecol(int x, int y, int row)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if ((row == 1 && col == 1) || ((row == y && col == x)))
			ft_putchar('o');
		else if ((row == 1 && col == x) || (row == y && col == 1))
		{
			ft_putchar('o');
		}
		else if ((col == 1 || col == x))
		{
			ft_putchar('|');
		}
		else if ((row == 1 || row == y))
		{
			ft_putchar('-');
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
