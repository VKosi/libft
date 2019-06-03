/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:57:54 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/03 13:57:59 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*result;
	unsigned int	start;
	unsigned int	size;
	unsigned int	spaces_count;

	if (!s)
		return (NULL);
	size = (unsigned int)ft_strlen((char*)s);
	spaces_count = ft_strcntfirstchar((char*)s, " \n\t");
	start = spaces_count;
	if (size > spaces_count)
		spaces_count += ft_strcntlastchar((char*)s, " \n\t");
	size -= spaces_count;
	if (!(result = ft_memalloc((size_t)size + 1)))
		return (NULL);
	result = ft_strncpy(result, (char*)s + start, size);
	return (result);
}
