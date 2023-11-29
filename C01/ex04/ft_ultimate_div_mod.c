/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:55:09 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/07 19:43:03 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a;
	*a = *a / *b;
	*b = div % *b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf ("%d\n", a);
	printf ("%d\n", b);
	return (0);
}
*/
