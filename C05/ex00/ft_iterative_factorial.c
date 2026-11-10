/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 12:10:24 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/22 12:34:17 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	n;

	result = 1;
	n = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (n <= nb)
	{
		result *= n;
		n++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb1 = 10;
	int	nb2 = 0;

	printf("nb1 factorielle : %d\n  nb2 factorielle : %d\n", 
	ft_iterative_factorial(nb1), ft_iterative_factorial(nb2));
}*/
