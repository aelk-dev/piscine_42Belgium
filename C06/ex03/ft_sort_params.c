/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:30:00 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/22 12:00:34 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcmp_swap(char **s1, char **s2)
{
	int		i;
	char	*temp;

	i = 0;
	while ((*s1)[i] && ((*s1)[i] == (*s2)[i]))
	{
		i++;
	}
	if ((*s1)[i] > (*s2)[i])
	{
		temp = *s1;
		*s1 = *s2;
		*s2 = temp;
	}
}

void	ft_sort_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (av[j] && av[j + 1])
		{
			ft_strcmp_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
	{
		return (0);
	}
	ft_sort_params(ac, av);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
