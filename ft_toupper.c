/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:42:28 by bshintak          #+#    #+#             */
/*   Updated: 2021/10/27 14:42:28 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		a -= 32;
	return (a);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int x;

	x = 'z';
	printf("fun��o = %d\n", toupper(x));
	printf("minha fun��o = %d\n", ft_toupper(x));
}*/
