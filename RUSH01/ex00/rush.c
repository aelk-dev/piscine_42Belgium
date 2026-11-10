/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:02:15 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/19 15:13:44 by nanciaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_all(int board[4][4], int depht, int rules[16]);
int		ft_check_number(int board[4][4], int depht);

void	ft_get_rules(int rules[16], char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		rules[i] = str[i * 2] - '0';
		i++;
	}
}

void	ft_putboard(int board[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_pos_valide(int rules[16], int board[4][4], int depht)
{
	if (!ft_check_number(board, depht))
		return (0);
	if (!ft_check_all(board, depht, rules))
		return (0);
	return (1);
}

void	place_number(int rules[16], int board[4][4], int depht, int *is_find)
{
	while (*is_find != -1 && board[depht / 4][depht % 4] < 4)
	{
		if (depht >= 16)
		{
			ft_putboard(board);
			*is_find = -1;
		}
		else
		{
			board[depht / 4][depht % 4] += 1;
			if (ft_pos_valide(rules, board, depht))
				place_number(rules, board, depht + 1, is_find);
		}
	}
	board[depht / 4][depht % 4] = 0;
	if (depht == 0 && *is_find != -1)
		write(1, "Error\n", 6);
}

void	rush(char *str)
{
	int	rules[16];
	int	board[4][4];
	int	is_find;
	int	i;

	is_find = 0;
	i = 0;
	while (i < 16)
	{
		board[i / 4][i % 4] = 0;
		i++;
	}
	ft_get_rules(rules, str);
	place_number(rules, board, 0, &is_find);
}
