/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:28:44 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/27 17:43:20 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strtrim(char const *s)
{
    char	*s2;
    size_t	i;
    size_t	i2;
    size_t	i3;

    i2 = ft_strlen(s) - 1;
    s2 = (char *)malloc(sizeof(char) * (i2 - i + 2));
    if (!s || s == NULL || s == '\0')
        return (NULL);
	i = 0;
	i3 = 0;
    if (!s2 || s2 == NULL)
		return (NULL);
    if (i2 == i)
        return ("");
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    while (s[i2] == ' ' || s[i2] == '\t' || s[i2] == '\n')
        i2--;
	s2[i2++] = '\0';
    while (i < i2)
        s2[i3++] = s[i++];
    s2[i3] = '\0';
    return (s2);
}

