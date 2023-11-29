/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlost@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:19:48 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/17 21:09:52 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(42);
	return (0);
}
*/
