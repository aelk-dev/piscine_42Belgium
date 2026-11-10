/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hakk <ael-hakk@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 22:02:41 by ael-hakk          #+#    #+#             */
/*   Updated: 2026/07/13 13:22:18 by ael-hakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	if_condition(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			str[i] -= 32;
		}
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (i > 0 && !((str[i - 1] <= 'a' && str[i - 1] >= 'z')
				|| (str[i - 1] <= 'A' && str[i - 1] >= 'Z')
				|| (str[i - 1] <= '0' && str[i - 1] >= '9')))
		{
			str[i] += 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if_condition(str, i);
		i++;
	}
	return (str);
}
