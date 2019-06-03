/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:17:27 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/03 16:27:24 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcapitalize(char *s)
{
	int i;

	i = 0;
	s[i] = ft_toupper(s[i]);
	while (s[++i])
	{
		s[i] = ft_tolower(s[i]);
		if (!ft_isalnum(s[i - 1]))
			s[i] = ft_toupper(s[i]);
	}
	return (s);
}

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return(1);
}

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return(1);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
	|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int main(int ac, char **av)
{
	if (ac != 2)
		printf("\n");
	return (0);
	
	int i;
	int b;

	i = 0;
	b = av[1][i];
	while (b != '\0')
	{
		if (av[1][i] >= 'a' || av[1][i] <= 'z')
			ft_strcapitalize(&av[1][i]);
		printf(%s"av[1][i]\n");
		i++;
		if (av[1][i] >= 'A' || av[1][i] <= 'Z')
			ft_strcapitalize(&av[1][i]);
		printf(%d"av[1][i]\n");
		i++;
		return (0);
	}
	printf("\n");
}
