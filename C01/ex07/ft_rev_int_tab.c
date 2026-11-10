/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 12:33:23 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/12 13:22:43 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sz;
	int	tmp;

	i = 0;
	sz = size - 1;
	while (i < sz)
	{
		tmp = tab[i];
		tab[i] = tab[sz];
		tab[sz] = tmp;
		i++;
		sz--;
	}
}
/*
int	main(void)
{
	int	tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int	size;
	int	i;

	size = 15;
	ft_rev_int_tab(tableau, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tableau[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
