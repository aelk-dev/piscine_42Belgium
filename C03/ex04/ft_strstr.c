/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:44:53 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/16 12:28:09 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(int arg, char **argv)
{
	char str[] = "mamamia j'ai archi faim dit, 
					demande a charlotte de prendre des sandwiches";
	char	to_find[] = "charlotte";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
