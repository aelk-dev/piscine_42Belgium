/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:00:48 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/19 15:00:51 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_number_col(int board[4][4], int depht)
{
	int	row;
	int	col;
	int	i;

	row = depht / 4;
	col = depht % 4;
	while (col > 0)
	{
		i = 1;
		while (col - i >= 0)
		{
			if (board[row][col] == (board[row][col - i]))
				return (0);
			i++;
		}
		col--;
	}
	return (1);
}

int	ft_check_number_row(int board[4][4], int depht)
{
	int	row;
	int	col;
	int	i;

	row = depht / 4;
	col = depht % 4;
	while (row > 0)
	{
		i = 1;
		while (row - i >= 0)
		{
			if (board[row][col] == (board[row - i][col]))
				return (0);
			i++;
		}
		row--;
	}
	return (1);
}

int	ft_check_number(int board[4][4], int depht)
{
	return (ft_check_number_row(board, depht)
		&& ft_check_number_col(board, depht));
}
/*
#include <stdio.h>
int	main(void)
{
	int	board[4][4] = { 
		{1, 2, 3, 1},
		{4, 1, 2, 3},
		{2, 4, 3, 1},
		{1, 2, 1, 4}};
	int result = ft_check_number(board, 11);
	printf("%d\n", result);
	return (0);	
}
*/
