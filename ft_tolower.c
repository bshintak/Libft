/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:42:37 by bshintak          #+#    #+#             */
/*   Updated: 2021/10/27 14:42:37 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
		a += 32;
	return (a);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int x;

	x = 'A';
	printf("fun��o = %d\n", tolower(x));
	printf("minha fun��o = %d\n", ft_tolower(x));
}*/
