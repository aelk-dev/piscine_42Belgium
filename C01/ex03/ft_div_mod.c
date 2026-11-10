/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 21:19:37 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/12 12:17:42 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	di;
	int	mo;
	int	*div;
	int	*mod;

	a = 90;
	b = 30;
	div = &di;
	mod = &mo;
	ft_div_mod(a, b, div, mod);
	printf("a = %d\n b = %d\n div = %d\n mod = %d\n ", a, b, *div, *mod);
}*/
