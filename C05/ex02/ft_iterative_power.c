/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 13:46:58 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/23 12:27:08 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power < 0 || (nb == 0 && power > 0))
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	n = nb;
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int n;
	int p;

	n = -5;
	p = 5;

	printf("%d puissance %d = %d\n", n,p, ft_iterative_power(n,p));
}*/
