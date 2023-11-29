/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:54:07 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/21 16:31:24 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	n = 0;
	while (n <= nb / 2 && n <= 46340)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf ("%d\n", ft_sqrt(3010225));
}
*/
