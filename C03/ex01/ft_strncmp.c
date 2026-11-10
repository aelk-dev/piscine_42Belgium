/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:50:38 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/14 12:43:20 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	diff;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && (i <= n - 1))
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int n;

	s1 = "Moucherons";
	s2 = "MoucheXenophone";
	n = 3;
	printf("%d\n", ft_strncmp(s1, s2, n));
}*/
