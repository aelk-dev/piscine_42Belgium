/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:01:37 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/19 15:10:22 by noletell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(char *str);
int		ft_check_arg(char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_check_arg(av[1]))
			rush(av[1]);
		else
			write(1, "Error\n", 7);
	}
	else
		write(1, "Error\n", 7);
	return (0);
}
