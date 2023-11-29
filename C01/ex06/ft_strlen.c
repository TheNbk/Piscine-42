/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:05:26 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/10 15:14:00 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Carlos";
	int	count = ft_strlen(str);
	ft_strlen(str);
	printf("Numero de caracteres: %d\n", count);
}
*/
