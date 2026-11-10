/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 12:42:31 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/16 13:20:26 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	j = dest_len;
	if (size <= dest_len)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] && dest_len < size - 1)
	{
		dest[dest_len] = src[i];
		dest_len ++;
		i++;
	}
	dest[dest_len] = '\0';
	return (j + ft_strlen(src));
}
/*
int	main(int arg, char **argv)
{
	char	*dest;
	char	*src;
	unsigned int	size;

	size = 15;
	dest = argv[1];
	src = argv[2];
	ft_strlcat(dest, src, size);
	printf("%d\n",ft_strlcat(dest, src, size));
	printf("%s\n", dest);
}*/
