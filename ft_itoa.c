/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:07:31 by vkosi             #+#    #+#             */
/*   Updated: 2019/05/22 17:37:45 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_nb_size(unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (nb >= 0)
	{
		nb /= 10;
		++size;
	}
	return(size + );
}

char				*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	index;
	unsigned int	nb;
	unsigned int	size;

	if (nbr < 0)
		nb = (unsigned int)(nbr * - 1);
	else
		nb = (unsigned int)nbr;
	size = (unsigned int)get_nb_size(nb);
	index = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (nbr < 0 ? 1 : 0))))
			return (0);
	if (nbr < 0 && (str[index] = '-'))
	size++;
	index = size - 1;
			while (nb >= 10)
			{

			}

}
