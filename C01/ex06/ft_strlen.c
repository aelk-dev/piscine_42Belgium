/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 12:14:37 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/12 12:30:40 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		i++;
		cnt++;
	}
	return (cnt);
}
/*
int	main(void)
{
	char	*str;

	str = "B MIO";
	printf("%d\n", ft_strlen(str));
	return (0);
}
*/
