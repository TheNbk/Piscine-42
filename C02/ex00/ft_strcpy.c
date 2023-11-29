/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:05:25 by chayashi          #+#    #+#             */
/*   Updated: 2023/09/10 15:42:52 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[50] = "Rush maldito";
	char	str2[50];

	printf ("A string 1 é: %s\n", str1);
	printf ("A copia é: %s\n", ft_strcpy(str2, str1));
	return (0);
}
*/
