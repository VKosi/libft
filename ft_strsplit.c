/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:35:33 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/24 16:50:45 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t        ft_word_count(char const *s, char c)
{
    int            i;
    size_t        len;
    i = 0;
    len = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
        {
            while (s[i] && s[i] != c)
                i++;
            len++;
        }
    }
    return (len);
}

char                **ft_strsplit(char const *s, char c)
{
    char        **tab;
    size_t        len;
    int            i;
    int            begin;
    if (!s || !(tab = (char **)malloc(sizeof(char)) (ft_word_count(s, c) + 1)))
        return (NULL);
    i = 0;
    len = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            begin = i;
            while (s[i] && s[i] != c)
                i++;
            tab[len++] = ft_strsub(s, begin, i - begin);
        }
    }
    tab[len] = NULL;
    return (tab);
}
