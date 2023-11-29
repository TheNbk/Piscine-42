/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:19:29 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/07 19:52:44 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{	
	int	x, y;
	int	*result, *rest;
	int	div, mod;
	
	x = 133;
	y = 6;
	result = &div;
	rest = &mod;	
	ft_div_mod(x, y, result, rest);
	printf ("%d\n", *result);
	printf ("%d\n", *rest);
	return (0);
}
*/
