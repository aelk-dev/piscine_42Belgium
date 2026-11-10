/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:55:26 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/21 19:21:04 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}
/*
#include <stdio.h>
int main(void)
{
  int nb1 = 5;
  int nb2 = 1500458;
  int nb3 = -485;
  int nb4 = -2147483648;
  int nb5 = 2147483647;

  ft_putnbr(nb1);
  write(1, "\n", 1);
  ft_putnbr(nb2);
  write(1, "\n", 1);
  ft_putnbr(nb3);
  write(1, "\n", 1);
  ft_putnbr(nb4);
  write(1, "\n", 1);
  ft_putnbr(nb5);
  write(1, "\n", 1);
}*/
