/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:26:49 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/09 21:28:19 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ft(int	*nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	nb;
	int	*nbr;
	int	a;
	int	b;
	int	r;

	nb = 0;
	nbr = &nb;
	ft_ft(nbr);
	a = *nbr / 10;
	b = *nbr % 10;
	r = a + 48;
	write(1, &r, 1);
	r = b + 48;
	write(1, &r, 1);
	return (0);
}*/
