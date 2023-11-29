/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:31:35 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/11 10:32:45 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	check;

	a = 0;
	check = 1;
	if (str[a] == '\0')
		return (check);
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
			a++;
		else
		{
			check = 0;
			return (check);
		}
	}
	return (check);
}
/*
#include <stdio.h>

int	main()
{
	char	name[10] = "";
    
	ft_str_is_numeric(name);
	printf ("%d", ft_str_is_numeric(name));
	return (0);
}
*/
