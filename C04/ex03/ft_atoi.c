/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:24:29 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/18 19:16:17 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	numb;

	i = 0;
	neg = 0;
	numb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numb = numb * 10 + str[i] - 48;
		i++;
	}
	if (neg % 2 != 0)
		numb = numb * -1;
	return (numb);
}

#include <stdio.h>

int	main()
{

		printf("%d\n", ft_atoi("-- --+--+-1-234ab567"));
}

