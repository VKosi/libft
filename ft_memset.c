/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:43:10 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/12 13:00:53 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(char *ptr, int x, size_t n)
{
	while (n)
	{
		*ptr = x;
		ptr++;
		n--;
	}
	return (ptr);
}
