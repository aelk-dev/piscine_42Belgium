/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 21:42:02 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/21 21:54:19 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
	{
		return (0);
	}
	i = 1;
	while (av[i])
	{
		i++;
	}
	i -= 1;
	while (i > 0)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
