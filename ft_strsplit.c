/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 12:48:49 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/15 15:25:54 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**b;
	size_t	word_contents;
	size_t	word_country;
	size_t	i;
	size_t	start;
	
	if (!s || !c)
		return (NULL);
	if (!(b = (char **)ft_memalloc((ft_strlen(s ,c) + 1) * sizeof(char *))))
		return (NULL);
	word_country = 0;
	word_contents = 0;
	i = -1;
	start = 0;
	while (s[++i])
	{
		if (word_contents && s[i] == c)
			b[word_country++] = ft_strsub(s, start, i - start);
		if (!word_contents && s[i] == c) ? 0 : 1;
	}
	if (word_contents)
		b[word_country] = ft_strsub(*b, start, i - start);
	return (b);
}
