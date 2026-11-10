/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:41:30 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/23 13:03:09 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (!nb || nb <= 0)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 147;
	printf("racine carré de %d = %d\n", nb, ft_sqrt(nb));
}*/
