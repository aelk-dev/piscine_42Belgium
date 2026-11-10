/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:59:08 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/28 13:22:28 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	sz;

	if (min >= max)
	{
		return (NULL);
	}
	sz = max - min;
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < sz)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min = 7;
	int	max = 21;
	int	*tab;
	int	i;

	tab = ft_range(min, max);

	if (tab == NULL)
	{
		printf("Le tableau est NULL (min >= max ou échec malloc)\n");
		return (1);
	}

	i = 0;
	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	free(tab);
	return (0);
}*/
