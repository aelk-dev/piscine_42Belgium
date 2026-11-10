/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:59:33 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/13 18:19:48 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexaconvert(char value)
{
	char	*hex;
	int		result_hexa1;
	int		result_hexa2;
	char	c[2];
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	result_hexa1 = (value / 16);
	result_hexa2 = (value % 16);
	c[0] = hex[result_hexa1];
	c[1] = hex[result_hexa2];
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_hexaconvert(str[i]);
		}
		i++;
	}
}
