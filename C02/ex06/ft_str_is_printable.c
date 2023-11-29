/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:42:51 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/11 18:34:38 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
			return (0);
		a++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	nome[20] = "";

	ft_str_is_printable(nome);
	printf("%d", ft_str_is_printable(nome));
	return (0);
}
*/
