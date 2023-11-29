/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:36:47 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/21 20:48:26 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power -1));
	return (nb);
}
/*
#include <stdio.h>
int     main()
{
    printf ("%d\n", ft_recursive_power(3, 5));
}
*/
