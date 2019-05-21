/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:13:08 by vkosi             #+#    #+#             */
/*   Updated: 2019/05/20 12:37:48 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strcmp(char s1, char s2)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) || (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}