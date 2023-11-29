/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:20:25 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/10 16:51:23 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = temp;
		count++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {1,2,3,4,5};
	int	count;

	count = 0;
	ft_rev_int_tab(tab, 5);
	while (count < 5)
	{
		printf("%d", tab[count]);
		count++;
	}
}
*/
