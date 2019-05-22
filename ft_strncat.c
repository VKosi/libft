/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:13:35 by vkosi             #+#    #+#             */
/*   Updated: 2019/05/22 13:32:23 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int 	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
