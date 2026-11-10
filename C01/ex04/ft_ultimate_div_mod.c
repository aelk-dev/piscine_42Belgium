/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 22:05:55 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/11 22:24:54 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quotion;
	int	rest;

	quotion = *a / *b;
	rest = *a % *b;
	*a = quotion;
	*b = rest;
}
/*
int	main(void)
{
	int	*a1;
	int	*b1;
	int	a;
	int	b;

	a = 15;
	b = 6;
	a1 = &a;
	b1 = &b;
	ft_ultimate_div_mod(a1, b1);
	printf("*a = %d\n *b = %d\n", *a1, *b1);
	
}*/
