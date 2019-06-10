/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:43:10 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/10 14:03:12 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_memset(char *ptr, int x, size_t n)
{
	while (n)
	{
		*ptr = x;
		ptr++;
		n--;
	}
	return (ptr);
}

int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    ft_memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After memset():  %s", str); 
    return 0; 
}
