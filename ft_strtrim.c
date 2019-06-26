/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:28:44 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/26 18:30:31 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char			*s2;
	unsigned int	i;
	unsigned int	i2;
	unsigned int	i3;

	i = 0;
	i3 = 0;
	i2 = ft_strlen(s) - 1;
	s2 = (char *)malloc(sizeof(char) * (i2 - i + 2));
	if (!s || ((char *)s2 == NULL))
		return (NULL);
	if (ft_strlen(s) == 0)
		return ("");
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while ((s[i2] == ' ' && i2 > i) || (s[i2] == '\t' && i2 > i) ||
	(s[i2] == '\n' && i2 > i))
		i2--;
	s2[i2++] = '\0';
	while (i < i2)
		s2[i3++] = s[i++];
	s2[i3] = '\0';
	return (s2);
}
