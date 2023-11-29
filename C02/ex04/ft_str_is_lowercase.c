/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:52:54 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/12 17:49:33 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	check;

	a = 0;
	check = 1;
	if (str[a] == '\0')
		return (check);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
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
	char	nome[20] = "a2a";

	ft_str_is_lowercase(nome);
	printf ("%d", ft_str_is_lowercase(nome));
	return (0);
}
*/
