/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:20 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/21 19:57:49 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int     main()
{
    printf ("%d\n", ft_interative_power(3, 3));
}
*/
