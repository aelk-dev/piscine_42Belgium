/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 12:39:25 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/22 13:38:13 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int nb1 = 10;
	int	nb2 = 0;

	printf("nb1 factorielle : %d\n  nb2 factorielle : %d\n",
	ft_recursive_factorial(nb1), ft_recursive_factorial(nb2));
}*/
