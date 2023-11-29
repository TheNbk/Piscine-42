/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:36:29 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/11 10:42:10 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	check;

	a = 0;
	check = 1;
	if (str[a] == '\0')
		return (check);
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
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
	char	nome[20] = "";

	ft_str_is_uppercase(nome);
	printf ("%d", ft_str_is_uppercase(nome));
	return (0);
}
*/
