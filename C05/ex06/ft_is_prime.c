/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:09:23 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/23 13:25:49 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb1 = 91;
	int nb2 = 11;
	int nb3 = 20;
	int nb4 = 0;
	int nb5 = -15;
	printf("%d isprime ?  %d\n", nb1, ft_is_prime(nb1));
	printf("%d isprime ?  %d\n", nb2, ft_is_prime(nb2));
	printf("%d isprime ?  %d\n", nb3, ft_is_prime(nb3));
	printf("%d isprime ?  %d\n", nb4, ft_is_prime(nb4));
	printf("%d isprime ?  %d\n", nb5, ft_is_prime(nb5));


}*/
