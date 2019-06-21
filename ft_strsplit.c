/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 12:20:41 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/21 15:49:52 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numwrds(char const *s, char c)
{
	size_t	i;
	size_t	control;

	i = 0;
	control = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			control++;
		}
	}
	return (control);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**ptopntr;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	/*ft_putchar('\n');
	ft_putnbr(ft_numwrds(s, c));
	ft_putchar('\n');*/
	ptopntr = (char **)malloc(sizeof(char *) * (ft_numwrds(s, c) + 1));
	if (ptopntr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			if (s[i] == '\0')
				i++;
			ptopntr[k] = ft_strsub(s, j, i - j);
			k++;
		}
	}
	ptopntr[k] = NULL;
/*	k = 0;
	while (ptopntr[k] != NULL)
	{
		ft_putendl(ptopntr[k]);
		k++;
	}*/
	return (ptopntr);
}
