/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:46:11 by bshintak          #+#    #+#             */
/*   Updated: 2021/10/19 16:19:11 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!src && !dest)
		return (NULL);
	while (++i < n)
		*(char *)(dest + i) = *(char *)(src + i);
	return (dest);
}

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}*/

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *dest;
	char *src;

	dest = "abcdef";
	src = "ABCDEF";
	printf("minha funcao = %s", ft_memcpy(dest, src, 6));
	printf("funcao = %s", memcpy(dest, src, 6));
}*/
