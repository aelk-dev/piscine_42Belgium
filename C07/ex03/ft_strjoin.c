/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 08:52:00 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/28 14:25:49 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_size_total(char **strs, int size)
{
	int	i;
	int	sz;

	sz = 0;
	i = 0;
	while (i < size)
	{
		sz += ft_strlen(strs[i]);
		i++;
	}
	return (sz);
}

void	add_join(int size, char **strs, char *sep, char *tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
		{
			while (sep[j])
				tab[k++] = sep[j++];
		}
		i++;
	}
	tab[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sz;
	char	*tab;

	if (size == 0)
	{
		tab = malloc(1 * sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	sz = 0;
	sz += count_size_total(strs, size) + (size - 1) * ft_strlen(sep);
	tab = malloc((sz + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	add_join(size, strs, sep, tab);
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	char *sep;
	char *s[3];
	s[0] = "fkhu";
	s[1] = "hello";
	s[2] = "cv ?";
	int size = 3;
	sep = ", ";
	printf("%s\n",ft_strjoin(size, s, sep));
}*/
