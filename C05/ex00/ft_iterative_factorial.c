/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:10:22 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/21 19:51:52 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		i++;
		res *= i;
	}
	return (res);
}
/*
#include <stdio.h>
int     main()
{
    printf ("%d\n", ft_iterative_factorial(9));
}
*/
