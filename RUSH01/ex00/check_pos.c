/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:58:45 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/19 13:29:30 by nanciaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_rules_row_left(int board[4][4], int depht, int *rules)
{
	int	max_height;
	int	count_rules;
	int	i;

	max_height = 0;
	count_rules = 0;
	i = 0;
	while (i <= 3)
	{
		if (max_height < board[depht / 4][i])
		{
			max_height = board[depht / 4][i];
			count_rules++;
		}
		i++;
	}
	if (count_rules == rules[depht / 4 + 8])
		return (1);
	else
		return (0);
}

int	ft_check_rules_row_right(int board[4][4], int depht, int *rules)
{
	int	max_height;
	int	count_rules;
	int	i;

	max_height = 0;
	count_rules = 0;
	i = 3;
	while (i >= 0)
	{
		if (max_height < board[depht / 4][i])
		{
			max_height = board[depht / 4][i];
			count_rules++;
		}
		i--;
	}
	if (count_rules == rules[depht / 4 + 12])
		return (1);
	else
		return (0);
}

int	ft_check_rules_col_top(int board[4][4], int depht, int *rules)
{
	int	max_height;
	int	count_rules;
	int	i;

	max_height = 0;
	count_rules = 0;
	i = 0;
	while (i <= 3)
	{
		if (max_height < board[i][depht % 4])
		{
			max_height = board[i][depht % 4];
			count_rules++;
		}
		i++;
	}
	if (count_rules == rules[depht % 4])
		return (1);
	else
		return (0);
}

int	ft_check_rules_col_bot(int board[4][4], int depht, int *rules)
{
	int	max_height;
	int	count_rules;
	int	i;

	max_height = 0;
	count_rules = 0;
	i = 3;
	while (i >= 0)
	{
		if (max_height < board[i][depht % 4])
		{
			max_height = board[i][depht % 4];
			count_rules++;
		}
		i--;
	}
	if (count_rules == rules[depht % 4 + 4])
		return (1);
	else
		return (0);
}

int	ft_check_all(int board[4][4], int depht, int *rules)
{
	if (depht % 4 == 3)
	{
		if (!ft_check_rules_row_left(board, depht, rules))
			return (0);
		if (!ft_check_rules_row_right(board, depht, rules))
			return (0);
	}
	if (depht >= 12)
	{
		if (!ft_check_rules_col_top(board, depht, rules))
			return (0);
		if (!ft_check_rules_col_bot(board, depht, rules))
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int rules[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};
	int	board[4][4] = {
		{1, 1, 1, 1},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 1, 3}};
	int result = ft_check_all(board, 7, rules);
	printf("%d\n", result);
	return (0);
}*/
