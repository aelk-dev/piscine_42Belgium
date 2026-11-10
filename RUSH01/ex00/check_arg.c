/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:00:04 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/19 15:13:00 by nanciaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_arg(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(str[i] > '0' && str[i] <= '4'))
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (str[i - 1] == ' ')
		return (0);
	if (i != 31)
		return (0);
	return (1);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_check_arg(av[1]));
}*/
