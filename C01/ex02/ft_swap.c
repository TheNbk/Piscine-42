/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:56:07 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/07 19:47:24 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 67;
	ft_swap(&x, &y);
	printf ("%d\n" "%d", x, y);
	return (0);
}
*/
