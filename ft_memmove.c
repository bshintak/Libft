/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:06:23 by bshintak          #+#    #+#             */
/*   Updated: 2021/10/20 12:06:23 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dest;
	if (a < b)
	{
		while (n--)
			b[n] = a[n];
	}
	else
		ft_memcpy(b, a, n);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char *dest;
	char *src;

	dest = "abcdef";
	src = "ABCDEF";
	printf("minha funcao = %s", ft_memmove(dest, src, 6));
	printf("funcao = %s", memmove(dest, src, 6));
}*/
